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

// Function: entry_0012336c
// Address: 0x12336c - 0x1233b8
void entry_0012336c_0x12336c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012336c_0x12336c");
#endif

    switch (ctx->pc) {
        case 0x1233b0u: goto label_1233b0;
        default: break;
    }

    ctx->pc = 0x12336cu;

    // 0x12336c: 0x0  nop
    ctx->pc = 0x12336cu;
    // NOP
    // 0x123370: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x123370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123378: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x123378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12337c: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x12337cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x123380: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x123380u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123384: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x123384u;
    {
        const bool branch_taken_0x123384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x123384) {
            ctx->pc = 0x1233B8u;
            return;
        }
    }
    ctx->pc = 0x12338Cu;
    // 0x12338c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123390: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x123394: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x123394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x123398: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12339c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1233a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1233a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1233a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1233a8: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1233A8u;
    SET_GPR_U32(ctx, 31, 0x1233B0u);
    ctx->pc = 0x1233ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233A8u;
    // 0x1233ac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1233A8u, 0x1233B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233B0u;
label_1233b0:
    // 0x1233b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1233b4: 0x0  nop
    ctx->pc = 0x1233b4u;
    // NOP
    ctx->pc = 0x1233b8u;
}
