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

// Function: FUN_00168130
// Address: 0x168130 - 0x1681ec
void FUN_00168130_0x168130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168130_0x168130");
#endif

    switch (ctx->pc) {
        case 0x168144u: goto label_168144;
        case 0x168194u: goto label_168194;
        case 0x1681b4u: goto label_1681b4;
        case 0x1681d0u: goto label_1681d0;
        default: break;
    }

    ctx->pc = 0x168130u;

    // 0x168130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16813c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16813Cu;
    SET_GPR_U32(ctx, 31, 0x168144u);
    ctx->pc = 0x168140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16813Cu;
    // 0x168140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16813Cu, 0x168144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168144u;
label_168144:
    // 0x168144: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x168144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x168148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16814c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168150: 0x80840022  lb          $a0, 0x22($a0)
    ctx->pc = 0x168150u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x168154: 0xae040220  sw          $a0, 0x220($s0)
    ctx->pc = 0x168154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 4));
    // 0x168158: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x168158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16815c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16815Cu;
    {
        const bool branch_taken_0x16815c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x168160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16815Cu;
        // 0x168160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16815c) {
            ctx->pc = 0x1681BCu;
            goto label_1681bc;
        }
    }
    ctx->pc = 0x168164u;
    // 0x168164: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x168164u;
    {
        const bool branch_taken_0x168164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x168164) {
            ctx->pc = 0x16819Cu;
            goto label_16819c;
        }
    }
    ctx->pc = 0x16816Cu;
    // 0x16816c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16816Cu;
    {
        const bool branch_taken_0x16816c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16816c) {
            ctx->pc = 0x16817Cu;
            goto label_16817c;
        }
    }
    ctx->pc = 0x168174u;
    // 0x168174: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x168174u;
    {
        const bool branch_taken_0x168174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168174u;
        // 0x168178: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168174) {
            ctx->pc = 0x1681E0u;
            goto label_1681e0;
        }
    }
    ctx->pc = 0x16817Cu;
label_16817c:
    // 0x16817c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x168180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x168184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168188: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x168188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16818c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16818Cu;
    SET_GPR_U32(ctx, 31, 0x168194u);
    ctx->pc = 0x168190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16818Cu;
    // 0x168190: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16818Cu, 0x168194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168194u;
label_168194:
    // 0x168194: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x168194u;
    {
        const bool branch_taken_0x168194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168194) {
            ctx->pc = 0x1681DCu;
            goto label_1681dc;
        }
    }
    ctx->pc = 0x16819Cu;
label_16819c:
    // 0x16819c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1681a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1681a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1681a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1681a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1681a8: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1681a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x1681ac: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1681ACu;
    SET_GPR_U32(ctx, 31, 0x1681B4u);
    ctx->pc = 0x1681B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681ACu;
    // 0x1681b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1681ACu, 0x1681B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681B4u;
label_1681b4:
    // 0x1681b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1681B4u;
    {
        const bool branch_taken_0x1681b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681b4) {
            ctx->pc = 0x1681DCu;
            goto label_1681dc;
        }
    }
    ctx->pc = 0x1681BCu;
label_1681bc:
    // 0x1681bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1681bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1681c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1681c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1681c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1681c8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1681C8u;
    SET_GPR_U32(ctx, 31, 0x1681D0u);
    ctx->pc = 0x1681CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681C8u;
    // 0x1681cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1681C8u, 0x1681D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681D0u;
label_1681d0:
    // 0x1681d0: 0x3c034086  lui         $v1, 0x4086
    ctx->pc = 0x1681d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16518 << 16));
    // 0x1681d4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1681d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1681d8: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1681d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_1681dc:
    // 0x1681dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1681dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1681e0:
    // 0x1681e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1681e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1681E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681E4u;
        // 0x1681e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1681E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1681ECu;
}
