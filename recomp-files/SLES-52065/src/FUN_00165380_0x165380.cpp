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

// Function: FUN_00165380
// Address: 0x165380 - 0x1653c8
void FUN_00165380_0x165380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165380_0x165380");
#endif

    switch (ctx->pc) {
        case 0x165394u: goto label_165394;
        case 0x1653acu: goto label_1653ac;
        default: break;
    }

    ctx->pc = 0x165380u;

    // 0x165380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16538c: 0xc05638c  jal         func_158E30
    ctx->pc = 0x16538Cu;
    SET_GPR_U32(ctx, 31, 0x165394u);
    ctx->pc = 0x165390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16538Cu;
    // 0x165390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158E30u, 0x16538Cu, 0x165394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165394u;
label_165394:
    // 0x165394: 0x860301f4  lh          $v1, 0x1F4($s0)
    ctx->pc = 0x165394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x165398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16539c: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1653a0: 0xae020210  sw          $v0, 0x210($s0)
    ctx->pc = 0x1653a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    // 0x1653a4: 0xc058ba0  jal         func_162E80
    ctx->pc = 0x1653A4u;
    SET_GPR_U32(ctx, 31, 0x1653ACu);
    ctx->pc = 0x1653A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653A4u;
    // 0x1653a8: 0xae030214  sw          $v1, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E80u, 0x1653A4u, 0x1653ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653ACu;
label_1653ac:
    // 0x1653ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1653acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1653b0: 0xa6030230  sh          $v1, 0x230($s0)
    ctx->pc = 0x1653b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1653b4: 0xa6030232  sh          $v1, 0x232($s0)
    ctx->pc = 0x1653b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 562), (uint16_t)GPR_U32(ctx, 3));
    // 0x1653b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1653b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1653bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1653bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1653c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1653C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1653C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653C0u;
        // 0x1653c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1653C8u;
}
