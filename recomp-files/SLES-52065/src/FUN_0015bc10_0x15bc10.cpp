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

// Function: FUN_0015bc10
// Address: 0x15bc10 - 0x15bcc8
void FUN_0015bc10_0x15bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bc10_0x15bc10");
#endif

    switch (ctx->pc) {
        case 0x15bc48u: goto label_15bc48;
        case 0x15bc70u: goto label_15bc70;
        case 0x15bc88u: goto label_15bc88;
        case 0x15bc98u: goto label_15bc98;
        case 0x15bcb0u: goto label_15bcb0;
        default: break;
    }

    ctx->pc = 0x15bc10u;

    // 0x15bc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bc18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bc20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bc24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15bc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc28: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15BC28u;
    {
        const bool branch_taken_0x15bc28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x15BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC28u;
        // 0x15bc2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc28) {
            ctx->pc = 0x15BC90u;
            goto label_15bc90;
        }
    }
    ctx->pc = 0x15BC30u;
    // 0x15bc30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BC30u;
    {
        const bool branch_taken_0x15bc30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC30u;
        // 0x15bc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc30) {
            ctx->pc = 0x15BC40u;
            goto label_15bc40;
        }
    }
    ctx->pc = 0x15BC38u;
    // 0x15bc38: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15BC38u;
    {
        const bool branch_taken_0x15bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC38u;
        // 0x15bc3c: 0xae3001d4  sw          $s0, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc38) {
            ctx->pc = 0x15BCB4u;
            goto label_15bcb4;
        }
    }
    ctx->pc = 0x15BC40u;
label_15bc40:
    // 0x15bc40: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15BC40u;
    SET_GPR_U32(ctx, 31, 0x15BC48u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15BC40u, 0x15BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC48u;
label_15bc48:
    // 0x15bc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bc4c: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x15bc50: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15bc54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BC54u;
    {
        const bool branch_taken_0x15bc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC54u;
        // 0x15bc58: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc54) {
            ctx->pc = 0x15BC78u;
            goto label_15bc78;
        }
    }
    ctx->pc = 0x15BC5Cu;
    // 0x15bc5c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15bc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bc68: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BC68u;
    SET_GPR_U32(ctx, 31, 0x15BC70u);
    ctx->pc = 0x15BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC68u;
    // 0x15bc6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BC68u, 0x15BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC70u;
label_15bc70:
    // 0x15bc70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15BC70u;
    {
        const bool branch_taken_0x15bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc70) {
            ctx->pc = 0x15BCB0u;
            goto label_15bcb0;
        }
    }
    ctx->pc = 0x15BC78u;
label_15bc78:
    // 0x15bc78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bc80: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BC80u;
    SET_GPR_U32(ctx, 31, 0x15BC88u);
    ctx->pc = 0x15BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC80u;
    // 0x15bc84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BC80u, 0x15BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC88u;
label_15bc88:
    // 0x15bc88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15BC88u;
    {
        const bool branch_taken_0x15bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc88) {
            ctx->pc = 0x15BCB0u;
            goto label_15bcb0;
        }
    }
    ctx->pc = 0x15BC90u;
label_15bc90:
    // 0x15bc90: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15BC90u;
    SET_GPR_U32(ctx, 31, 0x15BC98u);
    ctx->pc = 0x15BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC90u;
    // 0x15bc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15BC90u, 0x15BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC98u;
label_15bc98:
    // 0x15bc98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15bc9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bca4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15bca8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BCA8u;
    SET_GPR_U32(ctx, 31, 0x15BCB0u);
    ctx->pc = 0x15BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BCA8u;
    // 0x15bcac: 0xa22001d3  sb          $zero, 0x1D3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BCA8u, 0x15BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCB0u;
label_15bcb0:
    // 0x15bcb0: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x15bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
label_15bcb4:
    // 0x15bcb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bcbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCC0u;
        // 0x15bcc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BCC8u;
}
