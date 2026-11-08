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

// Function: entry_0012cd58
// Address: 0x12cd58 - 0x12cde0
void entry_0012cd58_0x12cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd58_0x12cd58");
#endif

    switch (ctx->pc) {
        case 0x12cda0u: goto label_12cda0;
        case 0x12cdb8u: goto label_12cdb8;
        default: break;
    }

    ctx->pc = 0x12cd58u;

    // 0x12cd58: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x12cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x12cd5c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x12cd60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12cd64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x12cd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12cd6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x12cd6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x12cd70: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x12cd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12cd74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12cd78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cd7c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x12cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x12cd80: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x12cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x12cd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12cd88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12cd8c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x12cd90: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12cd94: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x12cd94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12cd98: 0xc04b60c  jal         func_12D830
    ctx->pc = 0x12CD98u;
    SET_GPR_U32(ctx, 31, 0x12CDA0u);
    ctx->pc = 0x12CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD98u;
    // 0x12cd9c: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D830u, 0x12CD98u, 0x12CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDA0u;
label_12cda0:
    // 0x12cda0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x12cda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cda8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x12cda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x12cdac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12cdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12cdb0: 0xc04b5fc  jal         func_12D7F0
    ctx->pc = 0x12CDB0u;
    SET_GPR_U32(ctx, 31, 0x12CDB8u);
    ctx->pc = 0x12CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CDB0u;
    // 0x12cdb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7F0u, 0x12CDB0u, 0x12CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDB8u;
label_12cdb8:
    // 0x12cdb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12cdbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12cdbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12cdc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12cdc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cdc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12cdc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12cdc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12cdc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cdcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12cdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDD8u;
        // 0x12cddc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CDE0u;
}
