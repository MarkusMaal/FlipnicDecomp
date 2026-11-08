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

// Function: entry_001f7980
// Address: 0x1f7980 - 0x1f79b8
void entry_001f7980_0x1f7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7980_0x1f7980");
#endif

    switch (ctx->pc) {
        case 0x1f799cu: goto label_1f799c;
        case 0x1f79a4u: goto label_1f79a4;
        default: break;
    }

    ctx->pc = 0x1f7980u;

    // 0x1f7980: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f7984: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7988: 0x8c441350  lw          $a0, 0x1350($v0)
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x391350u));
    // 0x1f798c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f798cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f7990: 0xac71bb18  sw          $s1, -0x44E8($v1)
    ctx->pc = 0x1f7990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x21BB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB18u, _value); } while (0);
    // 0x1f7994: 0xc07ad48  jal         func_1EB520
    ctx->pc = 0x1F7994u;
    SET_GPR_U32(ctx, 31, 0x1F799Cu);
    ctx->pc = 0x1F7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7994u;
    // 0x1f7998: 0x24a51358  addiu       $a1, $a1, 0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB520u, 0x1F7994u, 0x1F799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F799Cu;
label_1f799c:
    // 0x1f799c: 0xc07de2c  jal         func_1F78B0
    ctx->pc = 0x1F799Cu;
    SET_GPR_U32(ctx, 31, 0x1F79A4u);
    ctx->pc = 0x1F79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F799Cu;
    // 0x1f79a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F78B0u, 0x1F799Cu, 0x1F79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79A4u;
label_1f79a4:
    // 0x1f79a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F79A4u;
    {
        const bool branch_taken_0x1f79a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79A4u;
        // 0x1f79a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79a4) {
            ctx->pc = 0x1F79C0u;
            return;
        }
    }
    ctx->pc = 0x1F79ACu;
    // 0x1f79ac: 0x8e04bb2c  lw          $a0, -0x44D4($s0)
    ctx->pc = 0x1f79acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949676)));
    // 0x1f79b0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F79B0u;
    SET_GPR_U32(ctx, 31, 0x1F79B8u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F79B0u, 0x1F79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79B8u;
}
