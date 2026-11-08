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

// Function: entry_001f8f3c
// Address: 0x1f8f3c - 0x1f8f80
void entry_001f8f3c_0x1f8f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8f3c_0x1f8f3c");
#endif

    switch (ctx->pc) {
        case 0x1f8f68u: goto label_1f8f68;
        default: break;
    }

    ctx->pc = 0x1f8f3cu;

    // 0x1f8f3c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8f40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f8f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f8f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f48: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8f48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8f4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8f50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1f8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f8f54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8f58: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f8f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f8f5c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8f60: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8F60u;
    SET_GPR_U32(ctx, 31, 0x1F8F68u);
    ctx->pc = 0x1F8F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F60u;
    // 0x1f8f64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8F60u, 0x1F8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F68u;
label_1f8f68:
    // 0x1f8f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f6c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F6Cu;
    {
        const bool branch_taken_0x1f8f6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F6Cu;
        // 0x1f8f70: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f6c) {
            ctx->pc = 0x1F8F80u;
            return;
        }
    }
    ctx->pc = 0x1F8F74u;
    // 0x1f8f74: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f8f78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8F78u;
    {
        const bool branch_taken_0x1f8f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F78u;
        // 0x1f8f7c: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f78) {
            ctx->pc = 0x1F8F88u;
            return;
        }
    }
    ctx->pc = 0x1F8F80u;
}
