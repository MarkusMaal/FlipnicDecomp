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

// Function: FUN_00118900
// Address: 0x118900 - 0x118988
void FUN_00118900_0x118900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118900_0x118900");
#endif

    switch (ctx->pc) {
        case 0x118920u: goto label_118920;
        case 0x11894cu: goto label_11894c;
        case 0x118970u: goto label_118970;
        default: break;
    }

    ctx->pc = 0x118900u;

    // 0x118900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11890c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118918: 0xc045c98  jal         func_117260
    ctx->pc = 0x118918u;
    SET_GPR_U32(ctx, 31, 0x118920u);
    ctx->pc = 0x11891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118918u;
    // 0x11891c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x118918u, 0x118920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118920u;
label_118920:
    // 0x118920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118924: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118928: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11892c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x11892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x118930: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x118934: 0x244286b0  addiu       $v0, $v0, -0x7950
    ctx->pc = 0x118934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936240));
    // 0x118938: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11893c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118940: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118944: 0xc054660  jal         func_151980
    ctx->pc = 0x118944u;
    SET_GPR_U32(ctx, 31, 0x11894Cu);
    ctx->pc = 0x118948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118944u;
    // 0x118948: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x118944u, 0x11894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11894Cu;
label_11894c:
    // 0x11894c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x11894cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118950: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118954: 0x246386b0  addiu       $v1, $v1, -0x7950
    ctx->pc = 0x118954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
    // 0x118958: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x118958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x11895c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11895cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118960: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x118960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118964: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118968: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x118968u;
    SET_GPR_U32(ctx, 31, 0x118970u);
    ctx->pc = 0x11896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118968u;
    // 0x11896c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x118968u, 0x118970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118970u;
label_118970:
    // 0x118970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11897c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11897cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118980: 0x3e00008  jr          $ra
    ctx->pc = 0x118980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118980u;
        // 0x118984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118988u;
}
