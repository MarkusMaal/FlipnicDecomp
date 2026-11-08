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

// Function: FUN_001e8740
// Address: 0x1e8740 - 0x1e87f8
void FUN_001e8740_0x1e8740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8740_0x1e8740");
#endif

    switch (ctx->pc) {
        case 0x1e8778u: goto label_1e8778;
        default: break;
    }

    ctx->pc = 0x1e8740u;

    // 0x1e8740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e874c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8754: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8758: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e8758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e875c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1e875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e8760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8764: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e8764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e876c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e8770: 0xc07a250  jal         func_1E8940
    ctx->pc = 0x1E8770u;
    SET_GPR_U32(ctx, 31, 0x1E8778u);
    ctx->pc = 0x1E8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8770u;
    // 0x1e8774: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8940u, 0x1E8770u, 0x1E8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8778u;
label_1e8778:
    // 0x1e8778: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e877c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e8780: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e8784: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e8784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e8788: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1e8788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e878c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e8790: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8790u;
    {
        const bool branch_taken_0x1e8790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8790) {
            ctx->pc = 0x1E87C8u;
            goto label_1e87c8;
        }
    }
    ctx->pc = 0x1E8798u;
    // 0x1e8798: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x1e8798u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e879c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1e879cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e87a0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1e87a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e87a4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e87a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e87a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E87A8u;
    {
        const bool branch_taken_0x1e87a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87a8) {
            ctx->pc = 0x1E87BCu;
            goto label_1e87bc;
        }
    }
    ctx->pc = 0x1E87B0u;
    // 0x1e87b0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x1e87b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e87b4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e87b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e87b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e87b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e87bc:
    // 0x1e87bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e87bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e87c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E87C0u;
    {
        const bool branch_taken_0x1e87c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87c0) {
            ctx->pc = 0x1E87D0u;
            goto label_1e87d0;
        }
    }
    ctx->pc = 0x1E87C8u;
label_1e87c8:
    // 0x1e87c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E87C8u;
    {
        const bool branch_taken_0x1e87c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87C8u;
        // 0x1e87cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87c8) {
            ctx->pc = 0x1E87E4u;
            goto label_1e87e4;
        }
    }
    ctx->pc = 0x1E87D0u;
label_1e87d0:
    // 0x1e87d0: 0x80430005  lb          $v1, 0x5($v0)
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1e87d4: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1e87d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e87d8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1e87d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e87dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e87e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e87e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e87e4:
    // 0x1e87e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e87e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e87e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e87e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e87ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e87f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E87F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87F0u;
        // 0x1e87f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E87F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E87F8u;
}
