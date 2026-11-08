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

// Function: FUN_00192990
// Address: 0x192990 - 0x192a20
void FUN_00192990_0x192990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192990_0x192990");
#endif

    switch (ctx->pc) {
        case 0x1929bcu: goto label_1929bc;
        case 0x1929c8u: goto label_1929c8;
        case 0x1929dcu: goto label_1929dc;
        case 0x1929ecu: goto label_1929ec;
        case 0x1929fcu: goto label_1929fc;
        default: break;
    }

    ctx->pc = 0x192990u;

    // 0x192990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x192994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x192998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19299c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1929a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1929a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1929a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1929a8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1929a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1929acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929b0: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x1929b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x1929b4: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x1929B4u;
    SET_GPR_U32(ctx, 31, 0x1929BCu);
    ctx->pc = 0x1929B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929B4u;
    // 0x1929b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x1929B4u, 0x1929BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929BCu;
label_1929bc:
    // 0x1929bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1929bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929c0: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x1929C0u;
    SET_GPR_U32(ctx, 31, 0x1929C8u);
    ctx->pc = 0x1929C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929C0u;
    // 0x1929c4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1929C0u, 0x1929C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929C8u;
label_1929c8:
    // 0x1929c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1929c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1929CCu;
    {
        const bool branch_taken_0x1929cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1929cc) {
            ctx->pc = 0x192A08u;
            goto label_192a08;
        }
    }
    ctx->pc = 0x1929D4u;
    // 0x1929d4: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1929D4u;
    SET_GPR_U32(ctx, 31, 0x1929DCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1929D4u, 0x1929DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929DCu;
label_1929dc:
    // 0x1929dc: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1929DCu;
    {
        const bool branch_taken_0x1929dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1929dc) {
            ctx->pc = 0x192A04u;
            goto label_192a04;
        }
    }
    ctx->pc = 0x1929E4u;
    // 0x1929e4: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1929E4u;
    SET_GPR_U32(ctx, 31, 0x1929ECu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1929E4u, 0x1929ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929ECu;
label_1929ec:
    // 0x1929ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1929ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1929f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929f4: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1929F4u;
    SET_GPR_U32(ctx, 31, 0x1929FCu);
    ctx->pc = 0x1929F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929F4u;
    // 0x1929f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1929F4u, 0x1929FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929FCu;
label_1929fc:
    // 0x1929fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1929FCu;
    {
        const bool branch_taken_0x1929fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929FCu;
        // 0x192a00: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929fc) {
            ctx->pc = 0x192A0Cu;
            goto label_192a0c;
        }
    }
    ctx->pc = 0x192A04u;
label_192a04:
    // 0x192a04: 0xae120320  sw          $s2, 0x320($s0)
    ctx->pc = 0x192a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 18));
label_192a08:
    // 0x192a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x192a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192a0c:
    // 0x192a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a18: 0x3e00008  jr          $ra
    ctx->pc = 0x192A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A18u;
        // 0x192a1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A20u;
}
