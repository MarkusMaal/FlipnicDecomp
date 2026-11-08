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

// Function: FUN_001340c0
// Address: 0x1340c0 - 0x1341ac
void FUN_001340c0_0x1340c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001340c0_0x1340c0");
#endif

    switch (ctx->pc) {
        case 0x134120u: goto label_134120;
        case 0x134198u: goto label_134198;
        default: break;
    }

    ctx->pc = 0x1340c0u;

    // 0x1340c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1340c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1340c4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1340c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1340c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1340c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1340cc: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1340ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1340d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1340d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1340d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1340d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1340d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1340d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340dc: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1340dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1340e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1340e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340e4: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1340e8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x1340e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1340ec: 0x26270030  addiu       $a3, $s1, 0x30
    ctx->pc = 0x1340ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1340f0: 0x26280040  addiu       $t0, $s1, 0x40
    ctx->pc = 0x1340f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1340f4: 0xa1230003  sb          $v1, 0x3($t1)
    ctx->pc = 0x1340f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1340f8: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x1340f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1340fc: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1340fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x134100: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x134100u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x134104: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x134104u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x134108: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x134108u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x13410c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134110: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x134110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x134114: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x134114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x134118: 0xc07d4cc  jal         func_1F5330
    ctx->pc = 0x134118u;
    SET_GPR_U32(ctx, 31, 0x134120u);
    ctx->pc = 0x13411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134118u;
    // 0x13411c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5330u, 0x134118u, 0x134120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134120u;
label_134120:
    // 0x134120: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x134120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134124: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x134124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x134128: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x134128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x13412c: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x13412cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x134130: 0x34490404  ori         $t1, $v0, 0x404
    ctx->pc = 0x134130u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x134134: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x134134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134138: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x134138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x13413c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x13413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x134140: 0x3443800c  ori         $v1, $v0, 0x800C
    ctx->pc = 0x134140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32780);
    // 0x134144: 0x3442820c  ori         $v0, $v0, 0x820C
    ctx->pc = 0x134144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33292);
    // 0x134148: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x134148u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x13414c: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x13414cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x134150: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x134150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x134154: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x134154u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x134158: 0xad090008  sw          $t1, 0x8($t0)
    ctx->pc = 0x134158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 9));
    // 0x13415c: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x13415cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x134160: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x134160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134164: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134168: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x134168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x13416c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134170: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x134170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x134174: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x134174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x134178: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x134178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x13417c: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x13417cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x134180: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x134180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x134184: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x134184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x134188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13418c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x134190: 0xc061c64  jal         func_187190
    ctx->pc = 0x134190u;
    SET_GPR_U32(ctx, 31, 0x134198u);
    ctx->pc = 0x134194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134190u;
    // 0x134194: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187190u, 0x134190u, 0x134198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134198u;
label_134198:
    // 0x134198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13419c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13419cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1341a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1341a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1341a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1341A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1341A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341A4u;
        // 0x1341a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1341A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1341ACu;
}
