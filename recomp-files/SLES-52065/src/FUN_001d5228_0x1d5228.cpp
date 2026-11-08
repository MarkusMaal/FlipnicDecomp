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

// Function: FUN_001d5228
// Address: 0x1d5228 - 0x1d5318
void FUN_001d5228_0x1d5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5228_0x1d5228");
#endif

    switch (ctx->pc) {
        case 0x1d5258u: goto label_1d5258;
        case 0x1d529cu: goto label_1d529c;
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52c8u: goto label_1d52c8;
        default: break;
    }

    ctx->pc = 0x1d5228u;

    // 0x1d5228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d522c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d523c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d523cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5244: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5248: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d5248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d524c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5250: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D5250u;
    SET_GPR_U32(ctx, 31, 0x1D5258u);
    ctx->pc = 0x1D5254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5250u;
    // 0x1d5254: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D5250u, 0x1D5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5258u;
label_1d5258:
    // 0x1d5258: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d5258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d525c: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5260: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1d5260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d5264: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1d5264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d5268: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d5268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d526c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d526cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5270: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5274: 0x242105b0  addiu       $at, $at, 0x5B0
    ctx->pc = 0x1d5274u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1456));
    // 0x1d5278: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1d527c: 0x8e070200  lw          $a3, 0x200($s0)
    ctx->pc = 0x1d527cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d5280: 0x678823  subu        $s1, $v1, $a3
    ctx->pc = 0x1d5280u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d5284: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x1d5284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1d5288: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x1d5288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d528c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D528Cu;
    {
        const bool branch_taken_0x1d528c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D528Cu;
        // 0x1d5290: 0x2a023  negu        $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d528c) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D5294u;
    // 0x1d5294: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D5294u;
    SET_GPR_U32(ctx, 31, 0x1D529Cu);
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D5294u, 0x1D529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D529Cu;
label_1d529c:
    // 0x1d529c: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1d529cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d52a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d52a4: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1d52a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1d52a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D52A8u;
    {
        const bool branch_taken_0x1d52a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A8u;
        // 0x1d52ac: 0xae030200  sw          $v1, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52a8) {
            ctx->pc = 0x1D52CCu;
            goto label_1d52cc;
        }
    }
    ctx->pc = 0x1D52B0u;
label_1d52b0:
    // 0x1d52b0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D52B0u;
    SET_GPR_U32(ctx, 31, 0x1D52B8u);
    ctx->pc = 0x1D52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B0u;
    // 0x1d52b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D52B0u, 0x1D52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52B8u;
label_1d52b8:
    // 0x1d52b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52bc: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1d52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d52c0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D52C0u;
    SET_GPR_U32(ctx, 31, 0x1D52C8u);
    ctx->pc = 0x1D52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C0u;
    // 0x1d52c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D52C0u, 0x1D52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C8u;
label_1d52c8:
    // 0x1d52c8: 0xae140200  sw          $s4, 0x200($s0)
    ctx->pc = 0x1d52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 20));
label_1d52cc:
    // 0x1d52cc: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1D52CCu;
    {
        const bool branch_taken_0x1d52cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CCu;
        // 0x1d52d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52cc) {
            ctx->pc = 0x1D52F8u;
            goto label_1d52f8;
        }
    }
    ctx->pc = 0x1D52D4u;
    // 0x1d52d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d52d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d52dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d52e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d52e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d52e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d52e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d52e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d52e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d52ec: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D52ECu;
    ctx->pc = 0x1D52F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52ECu;
    // 0x1d52f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52F4u;
    // 0x1d52f4: 0x0  nop
    ctx->pc = 0x1d52f4u;
    // NOP
label_1d52f8:
    // 0x1d52f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d52fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5300: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5304: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5308: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d5308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d530c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5310: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5310u;
        // 0x1d5314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5318u;
}
