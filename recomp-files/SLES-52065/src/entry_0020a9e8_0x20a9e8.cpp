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

// Function: entry_0020a9e8
// Address: 0x20a9e8 - 0x20aac8
void entry_0020a9e8_0x20a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a9e8_0x20a9e8");
#endif

    switch (ctx->pc) {
        case 0x20aa8cu: goto label_20aa8c;
        default: break;
    }

    ctx->pc = 0x20a9e8u;

    // 0x20a9e8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x20a9e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a9ec: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20a9f0: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x20a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x20a9f4: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x20a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x20a9f8: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x20a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
    // 0x20a9fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20aa00: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x20aa00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x20aa04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20aa08: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x20aa08u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x20aa0c: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x20aa0cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x20aa10: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20aa10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20aa14: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x20aa14u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x20aa18: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x20aa18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x20aa1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aa1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aa20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x20aa20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x20aa24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20aa28: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x20aa28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x20aa2c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x20aa2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x20aa30: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x20aa30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x20aa34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aa34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aa38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20aa3c: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x20aa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x20aa40: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20aa44: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20aa48: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x20aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x20aa4c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x20aa4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x20aa50: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x20aa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20aa54: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x20aa54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x20aa58: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x20aa58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x20aa5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x20aa5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x20aa60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aa60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aa64: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x20aa68: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x20aa68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x20aa6c: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x20aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x20aa70: 0xfe460140  sd          $a2, 0x140($s2)
    ctx->pc = 0x20aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 6));
    // 0x20aa74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20aa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa78: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x20aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
    // 0x20aa7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa80: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20aa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa84: 0xc0828fe  jal         func_20A3F8
    ctx->pc = 0x20AA84u;
    SET_GPR_U32(ctx, 31, 0x20AA8Cu);
    ctx->pc = 0x20AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA84u;
    // 0x20aa88: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3F8u, 0x20AA84u, 0x20AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA8Cu;
label_20aa8c:
    // 0x20aa8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aa90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20aa90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20aa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20aa9c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x20aa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x20aaa0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x20aaa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aaa4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20aaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20aaa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20aaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20aaac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20aab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20aab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20aab4: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AAB4u;
    {
        const bool branch_taken_0x20aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAB4u;
        // 0x20aab8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aab4) {
            ctx->pc = 0x20AAC8u;
            return;
        }
    }
    ctx->pc = 0x20AABCu;
    // 0x20aabc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aac0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20AAC0u;
    {
        const bool branch_taken_0x20aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC0u;
        // 0x20aac4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aac0) {
            ctx->pc = 0x20AB04u;
            return;
        }
    }
    ctx->pc = 0x20AAC8u;
}
