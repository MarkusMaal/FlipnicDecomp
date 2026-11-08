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

// Function: entry_001a77f4
// Address: 0x1a77f4 - 0x1a7848
void entry_001a77f4_0x1a77f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a77f4_0x1a77f4");
#endif

    switch (ctx->pc) {
        case 0x1a780cu: goto label_1a780c;
        case 0x1a7818u: goto label_1a7818;
        case 0x1a7828u: goto label_1a7828;
        default: break;
    }

    ctx->pc = 0x1a77f4u;

    // 0x1a77f4: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a77f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a77f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a77fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a77fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a7800: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a7800u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a7804: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7804u;
    SET_GPR_U32(ctx, 31, 0x1A780Cu);
    ctx->pc = 0x1A7808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7804u;
    // 0x1a7808: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7804u, 0x1A780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A780Cu;
label_1a780c:
    // 0x1a780c: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x1a780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7810: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7810u;
    SET_GPR_U32(ctx, 31, 0x1A7818u);
    ctx->pc = 0x1A7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7810u;
    // 0x1a7814: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7810u, 0x1A7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7818u;
label_1a7818:
    // 0x1a7818: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a7818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a781c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7820: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7820u;
    SET_GPR_U32(ctx, 31, 0x1A7828u);
    ctx->pc = 0x1A7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7820u;
    // 0x1a7824: 0x24a50740  addiu       $a1, $a1, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7820u, 0x1A7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7828u;
label_1a7828:
    // 0x1a7828: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a782c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7830: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a7830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7834: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a7838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a783c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a783cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7840: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7840u;
        // 0x1a7844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7848u;
}
