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

// Function: FUN_00142ff0
// Address: 0x142ff0 - 0x1430e4
void FUN_00142ff0_0x142ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142ff0_0x142ff0");
#endif

    switch (ctx->pc) {
        case 0x142ff0u: goto label_142ff0;
        case 0x142ff4u: goto label_142ff4;
        case 0x142ff8u: goto label_142ff8;
        case 0x142ffcu: goto label_142ffc;
        case 0x143000u: goto label_143000;
        case 0x143004u: goto label_143004;
        case 0x143008u: goto label_143008;
        case 0x14300cu: goto label_14300c;
        case 0x143010u: goto label_143010;
        case 0x143014u: goto label_143014;
        case 0x143018u: goto label_143018;
        case 0x14301cu: goto label_14301c;
        case 0x143020u: goto label_143020;
        case 0x143024u: goto label_143024;
        case 0x143028u: goto label_143028;
        case 0x14302cu: goto label_14302c;
        case 0x143030u: goto label_143030;
        case 0x143034u: goto label_143034;
        case 0x143038u: goto label_143038;
        case 0x14303cu: goto label_14303c;
        case 0x143040u: goto label_143040;
        case 0x143044u: goto label_143044;
        case 0x143048u: goto label_143048;
        case 0x14304cu: goto label_14304c;
        case 0x143050u: goto label_143050;
        case 0x143054u: goto label_143054;
        case 0x143058u: goto label_143058;
        case 0x14305cu: goto label_14305c;
        case 0x143060u: goto label_143060;
        case 0x143064u: goto label_143064;
        case 0x143068u: goto label_143068;
        case 0x14306cu: goto label_14306c;
        case 0x143070u: goto label_143070;
        case 0x143074u: goto label_143074;
        case 0x143078u: goto label_143078;
        case 0x14307cu: goto label_14307c;
        case 0x143080u: goto label_143080;
        case 0x143084u: goto label_143084;
        case 0x143088u: goto label_143088;
        case 0x14308cu: goto label_14308c;
        case 0x143090u: goto label_143090;
        case 0x143094u: goto label_143094;
        case 0x143098u: goto label_143098;
        case 0x14309cu: goto label_14309c;
        case 0x1430a0u: goto label_1430a0;
        case 0x1430a4u: goto label_1430a4;
        case 0x1430a8u: goto label_1430a8;
        case 0x1430acu: goto label_1430ac;
        case 0x1430b0u: goto label_1430b0;
        case 0x1430b4u: goto label_1430b4;
        case 0x1430b8u: goto label_1430b8;
        case 0x1430bcu: goto label_1430bc;
        case 0x1430c0u: goto label_1430c0;
        case 0x1430c4u: goto label_1430c4;
        case 0x1430c8u: goto label_1430c8;
        case 0x1430ccu: goto label_1430cc;
        case 0x1430d0u: goto label_1430d0;
        case 0x1430d4u: goto label_1430d4;
        case 0x1430d8u: goto label_1430d8;
        case 0x1430dcu: goto label_1430dc;
        case 0x1430e0u: goto label_1430e0;
        default: break;
    }

    ctx->pc = 0x142ff0u;

label_142ff0:
    // 0x142ff0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x142ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_142ff4:
    // 0x142ff4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x142ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_142ff8:
    // 0x142ff8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x142ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_142ffc:
    // 0x142ffc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x142ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_143000:
    // 0x143000: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x143000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_143004:
    // 0x143004: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x143004u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_143008:
    // 0x143008: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x143008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_14300c:
    // 0x14300c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14300cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143010:
    // 0x143010: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_143014:
    // 0x143014: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x143014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143018:
    // 0x143018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14301c:
    // 0x14301c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_143020:
    // 0x143020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_143024:
    // 0x143024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_143028:
    // 0x143028: 0x8c9e0030  lw          $fp, 0x30($a0)
    ctx->pc = 0x143028u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_14302c:
    // 0x14302c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_143030:
    if (ctx->pc == 0x143030u) {
        ctx->pc = 0x143030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14302Cu;
        // 0x143030: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143034u;
        goto label_143034;
    }
    ctx->pc = 0x14302Cu;
    {
        const bool branch_taken_0x14302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14302Cu;
        // 0x143030: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14302c) {
            ctx->pc = 0x1430A8u;
            goto label_1430a8;
        }
    }
    ctx->pc = 0x143034u;
label_143034:
    // 0x143034: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x143034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_143038:
    // 0x143038: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x143038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_14303c:
    // 0x14303c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_143040:
    // 0x143040: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_143044:
    // 0x143044: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x143044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_143048:
    // 0x143048: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_14304c:
    if (ctx->pc == 0x14304Cu) {
        ctx->pc = 0x14304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143048u;
        // 0x14304c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143050u;
        goto label_143050;
    }
    ctx->pc = 0x143048u;
    {
        const bool branch_taken_0x143048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143048u;
        // 0x14304c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143048) {
            ctx->pc = 0x14309Cu;
            goto label_14309c;
        }
    }
    ctx->pc = 0x143050u;
label_143050:
    // 0x143050: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x143050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143054:
    // 0x143054: 0x0  nop
    ctx->pc = 0x143054u;
    // NOP
label_143058:
    // 0x143058: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_14305c:
    // 0x14305c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x14305cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_143060:
    // 0x143060: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x143060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_143064:
    // 0x143064: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x143064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_143068:
    // 0x143068: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_14306c:
    // 0x14306c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_143070:
    // 0x143070: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x143070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_143074:
    // 0x143074: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x143074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143078:
    // 0x143078: 0x320f809  jalr        $t9
label_14307c:
    if (ctx->pc == 0x14307Cu) {
        ctx->pc = 0x14307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143078u;
        // 0x14307c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143080u;
        goto label_143080;
    }
    ctx->pc = 0x143078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143080u);
        ctx->pc = 0x14307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143078u;
        // 0x14307c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143078u, 0x143080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143080u;
label_143080:
    // 0x143080: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x143080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_143084:
    // 0x143084: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x143084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_143088:
    // 0x143088: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x143088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_14308c:
    // 0x14308c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x14308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_143090:
    // 0x143090: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x143090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_143094:
    // 0x143094: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_143098:
    if (ctx->pc == 0x143098u) {
        ctx->pc = 0x143098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143094u;
        // 0x143098: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14309Cu;
        goto label_14309c;
    }
    ctx->pc = 0x143094u;
    {
        const bool branch_taken_0x143094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143094u;
        // 0x143098: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143094) {
            ctx->pc = 0x143054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143054;
        }
    }
    ctx->pc = 0x14309Cu;
label_14309c:
    // 0x14309c: 0x0  nop
    ctx->pc = 0x14309cu;
    // NOP
label_1430a0:
    // 0x1430a0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1430a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1430a4:
    // 0x1430a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1430a8:
    // 0x1430a8: 0x21e182b  sltu        $v1, $s0, $fp
    ctx->pc = 0x1430a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_1430ac:
    // 0x1430ac: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1430b0:
    if (ctx->pc == 0x1430B0u) {
        ctx->pc = 0x1430B4u;
        goto label_1430b4;
    }
    ctx->pc = 0x1430ACu;
    {
        const bool branch_taken_0x1430ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1430ac) {
            ctx->pc = 0x143034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143034;
        }
    }
    ctx->pc = 0x1430B4u;
label_1430b4:
    // 0x1430b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1430b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1430b8:
    // 0x1430b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1430b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1430bc:
    // 0x1430bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1430bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1430c0:
    // 0x1430c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1430c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1430c4:
    // 0x1430c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1430c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1430c8:
    // 0x1430c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1430c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1430cc:
    // 0x1430cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1430ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1430d0:
    // 0x1430d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1430d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1430d4:
    // 0x1430d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1430d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1430d8:
    // 0x1430d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1430d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1430dc:
    // 0x1430dc: 0x3e00008  jr          $ra
label_1430e0:
    if (ctx->pc == 0x1430E0u) {
        ctx->pc = 0x1430E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430DCu;
        // 0x1430e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1430E4u;
        goto label_fallthrough_0x1430dc;
    }
    ctx->pc = 0x1430DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1430E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430DCu;
        // 0x1430e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1430DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1430dc:
    ctx->pc = 0x1430E4u;
}
