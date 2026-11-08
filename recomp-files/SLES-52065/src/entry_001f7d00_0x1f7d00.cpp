#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001f7d00
// Address: 0x1f7d00 - 0x1f7d2c
void entry_001f7d00_0x1f7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7d00_0x1f7d00");
#endif

    switch (ctx->pc) {
        case 0x1f7d08u: goto label_1f7d08;
        default: break;
    }

    ctx->pc = 0x1f7d00u;

    // 0x1f7d00: 0xc07dc40  jal         func_1F7100
    ctx->pc = 0x1F7D00u;
    SET_GPR_U32(ctx, 31, 0x1F7D08u);
    ctx->pc = 0x1F7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7100u, 0x1F7D00u, 0x1F7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7d0c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d10: 0xac44bb28  sw          $a0, -0x44D8($v0)
    ctx->pc = 0x1f7d10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB28u, _value); } while (0);
    // 0x1f7d14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d18: 0xac64bb2c  sw          $a0, -0x44D4($v1)
    ctx->pc = 0x1f7d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB2Cu, _value); } while (0);
    // 0x1f7d1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d20: 0xac44bb20  sw          $a0, -0x44E0($v0)
    ctx->pc = 0x1f7d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB20u, _value); } while (0);
    // 0x1f7d24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7D24u;
    {
        const bool branch_taken_0x1f7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D24u;
        // 0x1f7d28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d24) {
            ctx->pc = 0x1F7D40u;
            return;
        }
    }
    ctx->pc = 0x1F7D2Cu;
}
