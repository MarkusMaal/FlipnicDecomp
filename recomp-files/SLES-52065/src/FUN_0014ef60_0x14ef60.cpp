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

// Function: FUN_0014ef60
// Address: 0x14ef60 - 0x14f000
void FUN_0014ef60_0x14ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ef60_0x14ef60");
#endif

    switch (ctx->pc) {
        case 0x14ef98u: goto label_14ef98;
        case 0x14efa8u: goto label_14efa8;
        case 0x14efd4u: goto label_14efd4;
        default: break;
    }

    ctx->pc = 0x14ef60u;

    // 0x14ef60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14ef64: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14ef68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14ef6c: 0x24427220  addiu       $v0, $v0, 0x7220
    ctx->pc = 0x14ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29216));
    // 0x14ef70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14ef74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ef78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14ef78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ef80: 0x49180  sll         $s2, $a0, 6
    ctx->pc = 0x14ef80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14ef84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ef88: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x14ef88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14ef8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14ef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef90: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14EF90u;
    SET_GPR_U32(ctx, 31, 0x14EF98u);
    ctx->pc = 0x14EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF90u;
    // 0x14ef94: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14EF90u, 0x14EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF98u;
label_14ef98:
    // 0x14ef98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ef98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14efa0: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x14EFA0u;
    SET_GPR_U32(ctx, 31, 0x14EFA8u);
    ctx->pc = 0x14EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EFA0u;
    // 0x14efa4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x14EFA0u, 0x14EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFA8u;
label_14efa8:
    // 0x14efa8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x14efa8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14efac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14efb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14efb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14efb4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14efb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14efb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14efbc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14efc0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14efc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14efc4: 0x0  nop
    ctx->pc = 0x14efc4u;
    // NOP
    // 0x14efc8: 0x0  nop
    ctx->pc = 0x14efc8u;
    // NOP
    // 0x14efcc: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x14EFCCu;
    SET_GPR_U32(ctx, 31, 0x14EFD4u);
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x14EFCCu, 0x14EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFD4u;
label_14efd4:
    // 0x14efd4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14efd8: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x14efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x14efdc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14efe0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x14efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x14efe4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14efe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14efe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14efe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14efec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14efecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14eff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFF8u;
        // 0x14effc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F000u;
}
