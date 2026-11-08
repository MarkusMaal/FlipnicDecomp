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

// Function: FUN_00167fd0
// Address: 0x167fd0 - 0x168040
void FUN_00167fd0_0x167fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167fd0_0x167fd0");
#endif

    switch (ctx->pc) {
        case 0x16802cu: goto label_16802c;
        default: break;
    }

    ctx->pc = 0x167fd0u;

    // 0x167fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fe0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x167FE0u;
    {
        const bool branch_taken_0x167fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FE0u;
        // 0x167fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fe0) {
            ctx->pc = 0x168030u;
            goto label_168030;
        }
    }
    ctx->pc = 0x167FE8u;
    // 0x167fe8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167fec: 0x24429d70  addiu       $v0, $v0, -0x6290
    ctx->pc = 0x167fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942064));
    // 0x167ff0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167FF0u;
    {
        const bool branch_taken_0x167ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FF0u;
        // 0x167ff4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ff0) {
            ctx->pc = 0x168014u;
            goto label_168014;
        }
    }
    ctx->pc = 0x167FF8u;
    // 0x167ff8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167ffc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x167ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x168000: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168000u;
    {
        const bool branch_taken_0x168000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168000u;
        // 0x168004: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168000) {
            ctx->pc = 0x168014u;
            goto label_168014;
        }
    }
    ctx->pc = 0x168008u;
    // 0x168008: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16800c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x168010: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x168010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_168014:
    // 0x168014: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x168014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x168018: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168018u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16801c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16801Cu;
    {
        const bool branch_taken_0x16801c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16801Cu;
        // 0x168020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16801c) {
            ctx->pc = 0x16802Cu;
            goto label_16802c;
        }
    }
    ctx->pc = 0x168024u;
    // 0x168024: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168024u;
    SET_GPR_U32(ctx, 31, 0x16802Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168024u, 0x16802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16802Cu;
label_16802c:
    // 0x16802c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16802cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168030:
    // 0x168030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168038: 0x3e00008  jr          $ra
    ctx->pc = 0x168038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168038u;
        // 0x16803c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168040u;
}
