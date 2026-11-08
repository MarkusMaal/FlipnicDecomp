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

// Function: FUN_00167580
// Address: 0x167580 - 0x167634
void FUN_00167580_0x167580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167580_0x167580");
#endif

    switch (ctx->pc) {
        case 0x1675acu: goto label_1675ac;
        case 0x1675dcu: goto label_1675dc;
        case 0x1675fcu: goto label_1675fc;
        case 0x16760cu: goto label_16760c;
        default: break;
    }

    ctx->pc = 0x167580u;

    // 0x167580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16758c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167590: 0x84820220  lh          $v0, 0x220($a0)
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x167594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167594u;
    {
        const bool branch_taken_0x167594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167594u;
        // 0x167598: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167594) {
            ctx->pc = 0x1675A4u;
            goto label_1675a4;
        }
    }
    ctx->pc = 0x16759Cu;
    // 0x16759c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x16759Cu;
    {
        const bool branch_taken_0x16759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16759Cu;
        // 0x1675a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16759c) {
            ctx->pc = 0x167620u;
            goto label_167620;
        }
    }
    ctx->pc = 0x1675A4u;
label_1675a4:
    // 0x1675a4: 0xc059990  jal         func_166640
    ctx->pc = 0x1675A4u;
    SET_GPR_U32(ctx, 31, 0x1675ACu);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x1675A4u, 0x1675ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675ACu;
label_1675ac:
    // 0x1675ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1675acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b0: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x1675b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1675b4: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1675B4u;
    {
        const bool branch_taken_0x1675b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1675b4) {
            ctx->pc = 0x16761Cu;
            goto label_16761c;
        }
    }
    ctx->pc = 0x1675BCu;
    // 0x1675bc: 0x86230226  lh          $v1, 0x226($s1)
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1675c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1675c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1675c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1675c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1675c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1675d0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1675d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1675d4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1675D4u;
    SET_GPR_U32(ctx, 31, 0x1675DCu);
    ctx->pc = 0x1675D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675D4u;
    // 0x1675d8: 0xa6220226  sh          $v0, 0x226($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 550), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1675D4u, 0x1675DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675DCu;
label_1675dc:
    // 0x1675dc: 0x86220226  lh          $v0, 0x226($s1)
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1675e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1675E0u;
    {
        const bool branch_taken_0x1675e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E0u;
        // 0x1675e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e0) {
            ctx->pc = 0x167620u;
            goto label_167620;
        }
    }
    ctx->pc = 0x1675E8u;
    // 0x1675e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1675ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1675ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1675f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1675f4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1675F4u;
    SET_GPR_U32(ctx, 31, 0x1675FCu);
    ctx->pc = 0x1675F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675F4u;
    // 0x1675f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1675F4u, 0x1675FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675FCu;
label_1675fc:
    // 0x1675fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1675FCu;
    {
        const bool branch_taken_0x1675fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x167600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675FCu;
        // 0x167600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675fc) {
            ctx->pc = 0x16760Cu;
            goto label_16760c;
        }
    }
    ctx->pc = 0x167604u;
    // 0x167604: 0xc042570  jal         func_1095C0
    ctx->pc = 0x167604u;
    SET_GPR_U32(ctx, 31, 0x16760Cu);
    ctx->pc = 0x167608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167604u;
    // 0x167608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x167604u, 0x16760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16760Cu;
label_16760c:
    // 0x16760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167610: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x167610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x167614: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x167614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x167618: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x167618u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
label_16761c:
    // 0x16761c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16761cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167620:
    // 0x167620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16762c: 0x3e00008  jr          $ra
    ctx->pc = 0x16762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16762Cu;
        // 0x167630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16762Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167634u;
}
