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

// Function: FUN_0015c130
// Address: 0x15c130 - 0x15c240
void FUN_0015c130_0x15c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c130_0x15c130");
#endif

    switch (ctx->pc) {
        case 0x15c1a8u: goto label_15c1a8;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1ecu: goto label_15c1ec;
        default: break;
    }

    ctx->pc = 0x15c130u;

    // 0x15c130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15c134: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x15c134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15c138: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15c13c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c140: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15c144: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15c148: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c14c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15c14cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c150: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c154: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15c154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c15c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x15c15cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c164: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x15c164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c170: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x15c174: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x15c174u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15c178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15c17c: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x15c180: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15c184: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x15c184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15c188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c18c: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C18Cu;
    {
        const bool branch_taken_0x15c18c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x15C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C18Cu;
        // 0x15c190: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c18c) {
            ctx->pc = 0x15C198u;
            goto label_15c198;
        }
    }
    ctx->pc = 0x15C194u;
    // 0x15c194: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x15c194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c198:
    // 0x15c198: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C198u;
    {
        const bool branch_taken_0x15c198 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C198u;
        // 0x15c19c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c198) {
            ctx->pc = 0x15C1ACu;
            goto label_15c1ac;
        }
    }
    ctx->pc = 0x15C1A0u;
    // 0x15c1a0: 0xc080748  jal         func_201D20
    ctx->pc = 0x15C1A0u;
    SET_GPR_U32(ctx, 31, 0x15C1A8u);
    ctx->pc = 0x15C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C1A0u;
    // 0x15c1a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x15C1A0u, 0x15C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1A8u;
label_15c1a8:
    // 0x15c1a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x15c1a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c1ac:
    // 0x15c1ac: 0x8ec22c1c  lw          $v0, 0x2C1C($s6)
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x15c1b0: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x15c1b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15c1b8: 0x84500008  lh          $s0, 0x8($v0)
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c1bc: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x15c1bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15c1c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C1C0u;
    {
        const bool branch_taken_0x15c1c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C0u;
        // 0x15c1c4: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1c0) {
            ctx->pc = 0x15C210u;
            goto label_15c210;
        }
    }
    ctx->pc = 0x15C1C8u;
label_15c1c8:
    // 0x15c1c8: 0x660000c  bltz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x15C1C8u;
    {
        const bool branch_taken_0x15c1c8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x15C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C8u;
        // 0x15c1cc: 0x2d21021  addu        $v0, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1c8) {
            ctx->pc = 0x15C1FCu;
            goto label_15c1fc;
        }
    }
    ctx->pc = 0x15C1D0u;
    // 0x15c1d0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15c1d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c1d8: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15c1dc: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C1DCu;
    {
        const bool branch_taken_0x15c1dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1DCu;
        // 0x15c1e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1dc) {
            ctx->pc = 0x15C1FCu;
            goto label_15c1fc;
        }
    }
    ctx->pc = 0x15C1E4u;
    // 0x15c1e4: 0xc080796  jal         func_201E58
    ctx->pc = 0x15C1E4u;
    SET_GPR_U32(ctx, 31, 0x15C1ECu);
    ctx->pc = 0x15C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C1E4u;
    // 0x15c1e8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x15C1E4u, 0x15C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1ECu;
label_15c1ec:
    // 0x15c1ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C1ECu;
    {
        const bool branch_taken_0x15c1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c1ec) {
            ctx->pc = 0x15C1FCu;
            goto label_15c1fc;
        }
    }
    ctx->pc = 0x15C1F4u;
    // 0x15c1f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15C1F4u;
    {
        const bool branch_taken_0x15c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F4u;
        // 0x15c1f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1f4) {
            ctx->pc = 0x15C214u;
            goto label_15c214;
        }
    }
    ctx->pc = 0x15C1FCu;
label_15c1fc:
    // 0x15c1fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c200: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15c200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15c204: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x15c204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15c208: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15C208u;
    {
        const bool branch_taken_0x15c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C208u;
        // 0x15c20c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c208) {
            ctx->pc = 0x15C1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c1c8;
        }
    }
    ctx->pc = 0x15C210u;
label_15c210:
    // 0x15c210: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c214:
    // 0x15c214: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15c214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15c218: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15c218u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c21c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c21cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c220: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c224: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c22c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c238: 0x3e00008  jr          $ra
    ctx->pc = 0x15C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C238u;
        // 0x15c23c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C240u;
}
