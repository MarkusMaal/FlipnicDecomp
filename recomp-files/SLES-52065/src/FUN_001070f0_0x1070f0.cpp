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

// Function: FUN_001070f0
// Address: 0x1070f0 - 0x10718c
void FUN_001070f0_0x1070f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001070f0_0x1070f0");
#endif

    switch (ctx->pc) {
        case 0x107120u: goto label_107120;
        case 0x107138u: goto label_107138;
        case 0x107160u: goto label_107160;
        default: break;
    }

    ctx->pc = 0x1070f0u;

    // 0x1070f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1070f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1070f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1070f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1070fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1070fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x107100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x107104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x107104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10710c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x107110: 0xac8201d4  sw          $v0, 0x1D4($a0)
    ctx->pc = 0x107110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    // 0x107114: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x107114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x107118: 0xc04ae3c  jal         func_12B8F0
    ctx->pc = 0x107118u;
    SET_GPR_U32(ctx, 31, 0x107120u);
    ctx->pc = 0x10711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107118u;
    // 0x10711c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B8F0u, 0x107118u, 0x107120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107120u;
label_107120:
    // 0x107120: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x107120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x107124: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x107124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x107128: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107128u;
    {
        const bool branch_taken_0x107128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107128u;
        // 0x10712c: 0x24902cd8  addiu       $s0, $a0, 0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 11480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107128) {
            ctx->pc = 0x107170u;
            goto label_107170;
        }
    }
    ctx->pc = 0x107130u;
    // 0x107130: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x107130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107134: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x107134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107138:
    // 0x107138: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x107138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x10713c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x10713cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x107140: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x107140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x107144: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x107144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x107148: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x107148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10714c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10714cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x107150: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x107150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x107154: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107158: 0xc0425a4  jal         func_109690
    ctx->pc = 0x107158u;
    SET_GPR_U32(ctx, 31, 0x107160u);
    ctx->pc = 0x10715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107158u;
    // 0x10715c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x107158u, 0x107160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107160u;
label_107160:
    // 0x107160: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x107164: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x107164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x107168: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x107168u;
    {
        const bool branch_taken_0x107168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107168u;
        // 0x10716c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107168) {
            ctx->pc = 0x107138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107138;
        }
    }
    ctx->pc = 0x107170u;
label_107170:
    // 0x107170: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x107170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x107174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x107178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10717c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10717cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x107180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107184: 0x3e00008  jr          $ra
    ctx->pc = 0x107184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107184u;
        // 0x107188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10718Cu;
}
