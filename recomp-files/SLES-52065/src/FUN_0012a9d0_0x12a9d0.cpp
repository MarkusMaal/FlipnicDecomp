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

// Function: FUN_0012a9d0
// Address: 0x12a9d0 - 0x12ad04
void FUN_0012a9d0_0x12a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a9d0_0x12a9d0");
#endif

    switch (ctx->pc) {
        case 0x12a9d0u: goto label_12a9d0;
        case 0x12a9d4u: goto label_12a9d4;
        case 0x12a9d8u: goto label_12a9d8;
        case 0x12a9dcu: goto label_12a9dc;
        case 0x12a9e0u: goto label_12a9e0;
        case 0x12a9e4u: goto label_12a9e4;
        case 0x12a9e8u: goto label_12a9e8;
        case 0x12a9ecu: goto label_12a9ec;
        case 0x12a9f0u: goto label_12a9f0;
        case 0x12a9f4u: goto label_12a9f4;
        case 0x12a9f8u: goto label_12a9f8;
        case 0x12a9fcu: goto label_12a9fc;
        case 0x12aa00u: goto label_12aa00;
        case 0x12aa04u: goto label_12aa04;
        case 0x12aa08u: goto label_12aa08;
        case 0x12aa0cu: goto label_12aa0c;
        case 0x12aa10u: goto label_12aa10;
        case 0x12aa14u: goto label_12aa14;
        case 0x12aa18u: goto label_12aa18;
        case 0x12aa1cu: goto label_12aa1c;
        case 0x12aa20u: goto label_12aa20;
        case 0x12aa24u: goto label_12aa24;
        case 0x12aa28u: goto label_12aa28;
        case 0x12aa2cu: goto label_12aa2c;
        case 0x12aa30u: goto label_12aa30;
        case 0x12aa34u: goto label_12aa34;
        case 0x12aa38u: goto label_12aa38;
        case 0x12aa3cu: goto label_12aa3c;
        case 0x12aa40u: goto label_12aa40;
        case 0x12aa44u: goto label_12aa44;
        case 0x12aa48u: goto label_12aa48;
        case 0x12aa4cu: goto label_12aa4c;
        case 0x12aa50u: goto label_12aa50;
        case 0x12aa54u: goto label_12aa54;
        case 0x12aa58u: goto label_12aa58;
        case 0x12aa5cu: goto label_12aa5c;
        case 0x12aa60u: goto label_12aa60;
        case 0x12aa64u: goto label_12aa64;
        case 0x12aa68u: goto label_12aa68;
        case 0x12aa6cu: goto label_12aa6c;
        case 0x12aa70u: goto label_12aa70;
        case 0x12aa74u: goto label_12aa74;
        case 0x12aa78u: goto label_12aa78;
        case 0x12aa7cu: goto label_12aa7c;
        case 0x12aa80u: goto label_12aa80;
        case 0x12aa84u: goto label_12aa84;
        case 0x12aa88u: goto label_12aa88;
        case 0x12aa8cu: goto label_12aa8c;
        case 0x12aa90u: goto label_12aa90;
        case 0x12aa94u: goto label_12aa94;
        case 0x12aa98u: goto label_12aa98;
        case 0x12aa9cu: goto label_12aa9c;
        case 0x12aaa0u: goto label_12aaa0;
        case 0x12aaa4u: goto label_12aaa4;
        case 0x12aaa8u: goto label_12aaa8;
        case 0x12aaacu: goto label_12aaac;
        case 0x12aab0u: goto label_12aab0;
        case 0x12aab4u: goto label_12aab4;
        case 0x12aab8u: goto label_12aab8;
        case 0x12aabcu: goto label_12aabc;
        case 0x12aac0u: goto label_12aac0;
        case 0x12aac4u: goto label_12aac4;
        case 0x12aac8u: goto label_12aac8;
        case 0x12aaccu: goto label_12aacc;
        case 0x12aad0u: goto label_12aad0;
        case 0x12aad4u: goto label_12aad4;
        case 0x12aad8u: goto label_12aad8;
        case 0x12aadcu: goto label_12aadc;
        case 0x12aae0u: goto label_12aae0;
        case 0x12aae4u: goto label_12aae4;
        case 0x12aae8u: goto label_12aae8;
        case 0x12aaecu: goto label_12aaec;
        case 0x12aaf0u: goto label_12aaf0;
        case 0x12aaf4u: goto label_12aaf4;
        case 0x12aaf8u: goto label_12aaf8;
        case 0x12aafcu: goto label_12aafc;
        case 0x12ab00u: goto label_12ab00;
        case 0x12ab04u: goto label_12ab04;
        case 0x12ab08u: goto label_12ab08;
        case 0x12ab0cu: goto label_12ab0c;
        case 0x12ab10u: goto label_12ab10;
        case 0x12ab14u: goto label_12ab14;
        case 0x12ab18u: goto label_12ab18;
        case 0x12ab1cu: goto label_12ab1c;
        case 0x12ab20u: goto label_12ab20;
        case 0x12ab24u: goto label_12ab24;
        case 0x12ab28u: goto label_12ab28;
        case 0x12ab2cu: goto label_12ab2c;
        case 0x12ab30u: goto label_12ab30;
        case 0x12ab34u: goto label_12ab34;
        case 0x12ab38u: goto label_12ab38;
        case 0x12ab3cu: goto label_12ab3c;
        case 0x12ab40u: goto label_12ab40;
        case 0x12ab44u: goto label_12ab44;
        case 0x12ab48u: goto label_12ab48;
        case 0x12ab4cu: goto label_12ab4c;
        case 0x12ab50u: goto label_12ab50;
        case 0x12ab54u: goto label_12ab54;
        case 0x12ab58u: goto label_12ab58;
        case 0x12ab5cu: goto label_12ab5c;
        case 0x12ab60u: goto label_12ab60;
        case 0x12ab64u: goto label_12ab64;
        case 0x12ab68u: goto label_12ab68;
        case 0x12ab6cu: goto label_12ab6c;
        case 0x12ab70u: goto label_12ab70;
        case 0x12ab74u: goto label_12ab74;
        case 0x12ab78u: goto label_12ab78;
        case 0x12ab7cu: goto label_12ab7c;
        case 0x12ab80u: goto label_12ab80;
        case 0x12ab84u: goto label_12ab84;
        case 0x12ab88u: goto label_12ab88;
        case 0x12ab8cu: goto label_12ab8c;
        case 0x12ab90u: goto label_12ab90;
        case 0x12ab94u: goto label_12ab94;
        case 0x12ab98u: goto label_12ab98;
        case 0x12ab9cu: goto label_12ab9c;
        case 0x12aba0u: goto label_12aba0;
        case 0x12aba4u: goto label_12aba4;
        case 0x12aba8u: goto label_12aba8;
        case 0x12abacu: goto label_12abac;
        case 0x12abb0u: goto label_12abb0;
        case 0x12abb4u: goto label_12abb4;
        case 0x12abb8u: goto label_12abb8;
        case 0x12abbcu: goto label_12abbc;
        case 0x12abc0u: goto label_12abc0;
        case 0x12abc4u: goto label_12abc4;
        case 0x12abc8u: goto label_12abc8;
        case 0x12abccu: goto label_12abcc;
        case 0x12abd0u: goto label_12abd0;
        case 0x12abd4u: goto label_12abd4;
        case 0x12abd8u: goto label_12abd8;
        case 0x12abdcu: goto label_12abdc;
        case 0x12abe0u: goto label_12abe0;
        case 0x12abe4u: goto label_12abe4;
        case 0x12abe8u: goto label_12abe8;
        case 0x12abecu: goto label_12abec;
        case 0x12abf0u: goto label_12abf0;
        case 0x12abf4u: goto label_12abf4;
        case 0x12abf8u: goto label_12abf8;
        case 0x12abfcu: goto label_12abfc;
        case 0x12ac00u: goto label_12ac00;
        case 0x12ac04u: goto label_12ac04;
        case 0x12ac08u: goto label_12ac08;
        case 0x12ac0cu: goto label_12ac0c;
        case 0x12ac10u: goto label_12ac10;
        case 0x12ac14u: goto label_12ac14;
        case 0x12ac18u: goto label_12ac18;
        case 0x12ac1cu: goto label_12ac1c;
        case 0x12ac20u: goto label_12ac20;
        case 0x12ac24u: goto label_12ac24;
        case 0x12ac28u: goto label_12ac28;
        case 0x12ac2cu: goto label_12ac2c;
        case 0x12ac30u: goto label_12ac30;
        case 0x12ac34u: goto label_12ac34;
        case 0x12ac38u: goto label_12ac38;
        case 0x12ac3cu: goto label_12ac3c;
        case 0x12ac40u: goto label_12ac40;
        case 0x12ac44u: goto label_12ac44;
        case 0x12ac48u: goto label_12ac48;
        case 0x12ac4cu: goto label_12ac4c;
        case 0x12ac50u: goto label_12ac50;
        case 0x12ac54u: goto label_12ac54;
        case 0x12ac58u: goto label_12ac58;
        case 0x12ac5cu: goto label_12ac5c;
        case 0x12ac60u: goto label_12ac60;
        case 0x12ac64u: goto label_12ac64;
        case 0x12ac68u: goto label_12ac68;
        case 0x12ac6cu: goto label_12ac6c;
        case 0x12ac70u: goto label_12ac70;
        case 0x12ac74u: goto label_12ac74;
        case 0x12ac78u: goto label_12ac78;
        case 0x12ac7cu: goto label_12ac7c;
        case 0x12ac80u: goto label_12ac80;
        case 0x12ac84u: goto label_12ac84;
        case 0x12ac88u: goto label_12ac88;
        case 0x12ac8cu: goto label_12ac8c;
        case 0x12ac90u: goto label_12ac90;
        case 0x12ac94u: goto label_12ac94;
        case 0x12ac98u: goto label_12ac98;
        case 0x12ac9cu: goto label_12ac9c;
        case 0x12aca0u: goto label_12aca0;
        case 0x12aca4u: goto label_12aca4;
        case 0x12aca8u: goto label_12aca8;
        case 0x12acacu: goto label_12acac;
        case 0x12acb0u: goto label_12acb0;
        case 0x12acb4u: goto label_12acb4;
        case 0x12acb8u: goto label_12acb8;
        case 0x12acbcu: goto label_12acbc;
        case 0x12acc0u: goto label_12acc0;
        case 0x12acc4u: goto label_12acc4;
        case 0x12acc8u: goto label_12acc8;
        case 0x12acccu: goto label_12accc;
        case 0x12acd0u: goto label_12acd0;
        case 0x12acd4u: goto label_12acd4;
        case 0x12acd8u: goto label_12acd8;
        case 0x12acdcu: goto label_12acdc;
        case 0x12ace0u: goto label_12ace0;
        case 0x12ace4u: goto label_12ace4;
        case 0x12ace8u: goto label_12ace8;
        case 0x12acecu: goto label_12acec;
        case 0x12acf0u: goto label_12acf0;
        case 0x12acf4u: goto label_12acf4;
        case 0x12acf8u: goto label_12acf8;
        case 0x12acfcu: goto label_12acfc;
        case 0x12ad00u: goto label_12ad00;
        default: break;
    }

    ctx->pc = 0x12a9d0u;

label_12a9d0:
    // 0x12a9d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x12a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_12a9d4:
    // 0x12a9d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_12a9d8:
    // 0x12a9d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x12a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_12a9dc:
    // 0x12a9dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_12a9e0:
    // 0x12a9e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_12a9e4:
    // 0x12a9e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_12a9e8:
    // 0x12a9e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12a9ec:
    // 0x12a9ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12a9ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12a9f0:
    // 0x12a9f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12a9f4:
    // 0x12a9f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12a9f8:
    // 0x12a9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12a9fc:
    // 0x12a9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12aa00:
    // 0x12aa00: 0xc04a830  jal         func_12A0C0
label_12aa04:
    if (ctx->pc == 0x12AA04u) {
        ctx->pc = 0x12AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA00u;
        // 0x12aa04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA08u;
        goto label_12aa08;
    }
    ctx->pc = 0x12AA00u;
    SET_GPR_U32(ctx, 31, 0x12AA08u);
    ctx->pc = 0x12AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA00u;
    // 0x12aa04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0C0u, 0x12AA00u, 0x12AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA08u;
label_12aa08:
    // 0x12aa08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12aa08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12aa0c:
    // 0x12aa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12aa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aa10:
    // 0x12aa10: 0x8f858058  lw          $a1, -0x7FA8($gp)
    ctx->pc = 0x12aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934616)));
label_12aa14:
    // 0x12aa14: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12aa14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12aa18:
    // 0x12aa18: 0x320f809  jalr        $t9
label_12aa1c:
    if (ctx->pc == 0x12AA1Cu) {
        ctx->pc = 0x12AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA18u;
        // 0x12aa1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA20u;
        goto label_12aa20;
    }
    ctx->pc = 0x12AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12AA20u);
        ctx->pc = 0x12AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA18u;
        // 0x12aa1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AA18u, 0x12AA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AA20u;
label_12aa20:
    // 0x12aa20: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x12aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
label_12aa24:
    // 0x12aa24: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_12aa28:
    // 0x12aa28: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x12aa28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12aa2c:
    // 0x12aa2c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x12aa2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_12aa30:
    // 0x12aa30: 0x320f809  jalr        $t9
label_12aa34:
    if (ctx->pc == 0x12AA34u) {
        ctx->pc = 0x12AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA30u;
        // 0x12aa34: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA38u;
        goto label_12aa38;
    }
    ctx->pc = 0x12AA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12AA38u);
        ctx->pc = 0x12AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA30u;
        // 0x12aa34: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AA30u, 0x12AA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AA38u;
label_12aa38:
    // 0x12aa38: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x12aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_12aa3c:
    // 0x12aa3c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x12aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_12aa40:
    // 0x12aa40: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x12aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_12aa44:
    // 0x12aa44: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x12aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_12aa48:
    // 0x12aa48: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x12aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_12aa4c:
    // 0x12aa4c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x12aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_12aa50:
    // 0x12aa50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12aa54:
    // 0x12aa54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_12aa58:
    // 0x12aa58: 0x24500140  addiu       $s0, $v0, 0x140
    ctx->pc = 0x12aa58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_12aa5c:
    // 0x12aa5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_12aa60:
    // 0x12aa60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12aa64:
    // 0x12aa64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12aa68:
    // 0x12aa68: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_12aa6c:
    // 0x12aa6c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12aa70:
    // 0x12aa70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12aa74:
    // 0x12aa74: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12aa78:
    // 0x12aa78: 0xc080874  jal         func_2021D0
label_12aa7c:
    if (ctx->pc == 0x12AA7Cu) {
        ctx->pc = 0x12AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA78u;
        // 0x12aa7c: 0x8f85805c  lw          $a1, -0x7FA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA80u;
        goto label_12aa80;
    }
    ctx->pc = 0x12AA78u;
    SET_GPR_U32(ctx, 31, 0x12AA80u);
    ctx->pc = 0x12AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA78u;
    // 0x12aa7c: 0x8f85805c  lw          $a1, -0x7FA4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12AA78u, 0x12AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA80u;
label_12aa80:
    // 0x12aa80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_12aa84:
    if (ctx->pc == 0x12AA84u) {
        ctx->pc = 0x12AA88u;
        goto label_12aa88;
    }
    ctx->pc = 0x12AA80u;
    {
        const bool branch_taken_0x12aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa80) {
            ctx->pc = 0x12AA8Cu;
            goto label_12aa8c;
        }
    }
    ctx->pc = 0x12AA88u;
label_12aa88:
    // 0x12aa88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_12aa8c:
    // 0x12aa8c: 0x0  nop
    ctx->pc = 0x12aa8cu;
    // NOP
label_12aa90:
    // 0x12aa90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12aa94:
    // 0x12aa94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12aa98:
    // 0x12aa98: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_12aa9c:
    // 0x12aa9c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12aaa0:
    // 0x12aaa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12aaa4:
    // 0x12aaa4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12aaa8:
    // 0x12aaa8: 0xc080874  jal         func_2021D0
label_12aaac:
    if (ctx->pc == 0x12AAACu) {
        ctx->pc = 0x12AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAA8u;
        // 0x12aaac: 0x8f858060  lw          $a1, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAB0u;
        goto label_12aab0;
    }
    ctx->pc = 0x12AAA8u;
    SET_GPR_U32(ctx, 31, 0x12AAB0u);
    ctx->pc = 0x12AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAA8u;
    // 0x12aaac: 0x8f858060  lw          $a1, -0x7FA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12AAA8u, 0x12AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAB0u;
label_12aab0:
    // 0x12aab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12aab4:
    if (ctx->pc == 0x12AAB4u) {
        ctx->pc = 0x12AAB8u;
        goto label_12aab8;
    }
    ctx->pc = 0x12AAB0u;
    {
        const bool branch_taken_0x12aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aab0) {
            ctx->pc = 0x12AAC0u;
            goto label_12aac0;
        }
    }
    ctx->pc = 0x12AAB8u;
label_12aab8:
    // 0x12aab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12aabc:
    // 0x12aabc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_12aac0:
    // 0x12aac0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12aac4:
    // 0x12aac4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12aac8:
    // 0x12aac8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_12aacc:
    // 0x12aacc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12aad0:
    // 0x12aad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12aad4:
    // 0x12aad4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x12aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12aad8:
    // 0x12aad8: 0xc080874  jal         func_2021D0
label_12aadc:
    if (ctx->pc == 0x12AADCu) {
        ctx->pc = 0x12AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAD8u;
        // 0x12aadc: 0x8f858064  lw          $a1, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAE0u;
        goto label_12aae0;
    }
    ctx->pc = 0x12AAD8u;
    SET_GPR_U32(ctx, 31, 0x12AAE0u);
    ctx->pc = 0x12AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAD8u;
    // 0x12aadc: 0x8f858064  lw          $a1, -0x7F9C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12AAD8u, 0x12AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAE0u;
label_12aae0:
    // 0x12aae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12aae4:
    if (ctx->pc == 0x12AAE4u) {
        ctx->pc = 0x12AAE8u;
        goto label_12aae8;
    }
    ctx->pc = 0x12AAE0u;
    {
        const bool branch_taken_0x12aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aae0) {
            ctx->pc = 0x12AAF0u;
            goto label_12aaf0;
        }
    }
    ctx->pc = 0x12AAE8u;
label_12aae8:
    // 0x12aae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12aaec:
    // 0x12aaec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_12aaf0:
    // 0x12aaf0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12aaf4:
    // 0x12aaf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12aaf8:
    // 0x12aaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12aafc:
    // 0x12aafc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12ab00:
    // 0x12ab00: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_12ab04:
    // 0x12ab04: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12ab08:
    // 0x12ab08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12ab0c:
    // 0x12ab0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12ab10:
    // 0x12ab10: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x12ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12ab14:
    // 0x12ab14: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_12ab18:
    // 0x12ab18: 0x320f809  jalr        $t9
label_12ab1c:
    if (ctx->pc == 0x12AB1Cu) {
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB20u;
        goto label_12ab20;
    }
    ctx->pc = 0x12AB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12AB20u);
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AB18u, 0x12AB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AB20u;
label_12ab20:
    // 0x12ab20: 0x51f021  addu        $fp, $v0, $s1
    ctx->pc = 0x12ab20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_12ab24:
    // 0x12ab24: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x12ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12ab28:
    // 0x12ab28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12ab2c:
    // 0x12ab2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12ab30:
    // 0x12ab30: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_12ab34:
    // 0x12ab34: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12ab38:
    // 0x12ab38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12ab3c:
    // 0x12ab3c: 0x8c510090  lw          $s1, 0x90($v0)
    ctx->pc = 0x12ab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12ab40:
    // 0x12ab40: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x12ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_12ab44:
    // 0x12ab44: 0xc04e848  jal         func_13A120
label_12ab48:
    if (ctx->pc == 0x12AB48u) {
        ctx->pc = 0x12AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB44u;
        // 0x12ab48: 0x290c0  sll         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB4Cu;
        goto label_12ab4c;
    }
    ctx->pc = 0x12AB44u;
    SET_GPR_U32(ctx, 31, 0x12AB4Cu);
    ctx->pc = 0x12AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB44u;
    // 0x12ab48: 0x290c0  sll         $s2, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A120u, 0x12AB44u, 0x12AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB4Cu;
label_12ab4c:
    // 0x12ab4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_12ab50:
    // 0x12ab50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12ab50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab54:
    // 0x12ab54: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x12ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_12ab58:
    // 0x12ab58: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x12ab58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ab5c:
    // 0x12ab5c: 0x8e3700a0  lw          $s7, 0xA0($s1)
    ctx->pc = 0x12ab5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_12ab60:
    // 0x12ab60: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x12ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_12ab64:
    // 0x12ab64: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x12ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12ab68:
    // 0x12ab68: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x12ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_12ab6c:
    // 0x12ab6c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x12ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_12ab70:
    // 0x12ab70: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x12ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_12ab74:
    // 0x12ab74: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x12ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_12ab78:
    // 0x12ab78: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x12ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_12ab7c:
    // 0x12ab7c: 0x0  nop
    ctx->pc = 0x12ab7cu;
    // NOP
label_12ab80:
    // 0x12ab80: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x12ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_12ab84:
    // 0x12ab84: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x12ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12ab88:
    // 0x12ab88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12ab8c:
    // 0x12ab8c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x12ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_12ab90:
    // 0x12ab90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ab90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab94:
    // 0x12ab94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab98:
    // 0x12ab98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12ab98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab9c:
    // 0x12ab9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12aba0:
    // 0x12aba0: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x12aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
label_12aba4:
    // 0x12aba4: 0x24560044  addiu       $s6, $v0, 0x44
    ctx->pc = 0x12aba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_12aba8:
    // 0x12aba8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_12abac:
    // 0x12abac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x12abacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_12abb0:
    // 0x12abb0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x12abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_12abb4:
    // 0x12abb4: 0xc04eacc  jal         func_13AB30
label_12abb8:
    if (ctx->pc == 0x12ABB8u) {
        ctx->pc = 0x12ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABB4u;
        // 0x12abb8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ABBCu;
        goto label_12abbc;
    }
    ctx->pc = 0x12ABB4u;
    SET_GPR_U32(ctx, 31, 0x12ABBCu);
    ctx->pc = 0x12ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABB4u;
    // 0x12abb8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12ABB4u, 0x12ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABBCu;
label_12abbc:
    // 0x12abbc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_12abc0:
    // 0x12abc0: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x12abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_12abc4:
    // 0x12abc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_12abc8:
    // 0x12abc8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x12abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12abcc:
    // 0x12abcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12abd0:
    // 0x12abd0: 0xc07edfe  jal         func_1FB7F8
label_12abd4:
    if (ctx->pc == 0x12ABD4u) {
        ctx->pc = 0x12ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABD0u;
        // 0x12abd4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ABD8u;
        goto label_12abd8;
    }
    ctx->pc = 0x12ABD0u;
    SET_GPR_U32(ctx, 31, 0x12ABD8u);
    ctx->pc = 0x12ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABD0u;
    // 0x12abd4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x12ABD0u, 0x12ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABD8u;
label_12abd8:
    // 0x12abd8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_12abdc:
    // 0x12abdc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12abdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_12abe0:
    // 0x12abe0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12abe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12abe4:
    // 0x12abe4: 0x0  nop
    ctx->pc = 0x12abe4u;
    // NOP
label_12abe8:
    // 0x12abe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12abe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12abec:
    // 0x12abec: 0x0  nop
    ctx->pc = 0x12abecu;
    // NOP
label_12abf0:
    // 0x12abf0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_12abf4:
    if (ctx->pc == 0x12ABF4u) {
        ctx->pc = 0x12ABF8u;
        goto label_12abf8;
    }
    ctx->pc = 0x12ABF0u;
    {
        const bool branch_taken_0x12abf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12abf0) {
            ctx->pc = 0x12AC54u;
            goto label_12ac54;
        }
    }
    ctx->pc = 0x12ABF8u;
label_12abf8:
    // 0x12abf8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_12abfc:
    // 0x12abfc: 0x2442ec40  addiu       $v0, $v0, -0x13C0
    ctx->pc = 0x12abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
label_12ac00:
    // 0x12ac00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_12ac04:
    // 0x12ac04: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x12ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ac08:
    // 0x12ac08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ac0c:
    // 0x12ac0c: 0xc07edfe  jal         func_1FB7F8
label_12ac10:
    if (ctx->pc == 0x12AC10u) {
        ctx->pc = 0x12AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC0Cu;
        // 0x12ac10: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC14u;
        goto label_12ac14;
    }
    ctx->pc = 0x12AC0Cu;
    SET_GPR_U32(ctx, 31, 0x12AC14u);
    ctx->pc = 0x12AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC0Cu;
    // 0x12ac10: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x12AC0Cu, 0x12AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC14u;
label_12ac14:
    // 0x12ac14: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_12ac18:
    // 0x12ac18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12ac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_12ac1c:
    // 0x12ac1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12ac1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ac20:
    // 0x12ac20: 0x0  nop
    ctx->pc = 0x12ac20u;
    // NOP
label_12ac24:
    // 0x12ac24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12ac24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ac28:
    // 0x12ac28: 0x0  nop
    ctx->pc = 0x12ac28u;
    // NOP
label_12ac2c:
    // 0x12ac2c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_12ac30:
    if (ctx->pc == 0x12AC30u) {
        ctx->pc = 0x12AC34u;
        goto label_12ac34;
    }
    ctx->pc = 0x12AC2Cu;
    {
        const bool branch_taken_0x12ac2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ac2c) {
            ctx->pc = 0x12AC54u;
            goto label_12ac54;
        }
    }
    ctx->pc = 0x12AC34u;
label_12ac34:
    // 0x12ac34: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_12ac38:
    // 0x12ac38: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_12ac3c:
    // 0x12ac3c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x12ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12ac40:
    // 0x12ac40: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x12ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_12ac44:
    // 0x12ac44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x12ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_12ac48:
    // 0x12ac48: 0x3d22821  addu        $a1, $fp, $s2
    ctx->pc = 0x12ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_12ac4c:
    // 0x12ac4c: 0xc07d38e  jal         func_1F4E38
label_12ac50:
    if (ctx->pc == 0x12AC50u) {
        ctx->pc = 0x12AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC4Cu;
        // 0x12ac50: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC54u;
        goto label_12ac54;
    }
    ctx->pc = 0x12AC4Cu;
    SET_GPR_U32(ctx, 31, 0x12AC54u);
    ctx->pc = 0x12AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC4Cu;
    // 0x12ac50: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x12AC4Cu, 0x12AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC54u;
label_12ac54:
    // 0x12ac54: 0x0  nop
    ctx->pc = 0x12ac54u;
    // NOP
label_12ac58:
    // 0x12ac58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12ac58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12ac5c:
    // 0x12ac5c: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x12ac5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_12ac60:
    // 0x12ac60: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x12ac60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_12ac64:
    // 0x12ac64: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_12ac68:
    if (ctx->pc == 0x12AC68u) {
        ctx->pc = 0x12AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC64u;
        // 0x12ac68: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC6Cu;
        goto label_12ac6c;
    }
    ctx->pc = 0x12AC64u;
    {
        const bool branch_taken_0x12ac64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC64u;
        // 0x12ac68: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac64) {
            ctx->pc = 0x12ABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aba8;
        }
    }
    ctx->pc = 0x12AC6Cu;
label_12ac6c:
    // 0x12ac6c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x12ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_12ac70:
    // 0x12ac70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_12ac74:
    // 0x12ac74: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x12ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_12ac78:
    // 0x12ac78: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x12ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_12ac7c:
    // 0x12ac7c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x12ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_12ac80:
    // 0x12ac80: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x12ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_12ac84:
    // 0x12ac84: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_12ac88:
    // 0x12ac88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12ac8c:
    // 0x12ac8c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x12ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_12ac90:
    // 0x12ac90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_12ac94:
    // 0x12ac94: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x12ac94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_12ac98:
    // 0x12ac98: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_12ac9c:
    if (ctx->pc == 0x12AC9Cu) {
        ctx->pc = 0x12AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC98u;
        // 0x12ac9c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACA0u;
        goto label_12aca0;
    }
    ctx->pc = 0x12AC98u;
    {
        const bool branch_taken_0x12ac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC98u;
        // 0x12ac9c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac98) {
            ctx->pc = 0x12AB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab7c;
        }
    }
    ctx->pc = 0x12ACA0u;
label_12aca0:
    // 0x12aca0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_12aca4:
    // 0x12aca4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x12aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_12aca8:
    // 0x12aca8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x12aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_12acac:
    // 0x12acac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x12acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12acb0:
    // 0x12acb0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_12acb4:
    // 0x12acb4: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x12acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_12acb8:
    // 0x12acb8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x12acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_12acbc:
    // 0x12acbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12acc0:
    // 0x12acc0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x12acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_12acc4:
    // 0x12acc4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_12acc8:
    // 0x12acc8: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x12acc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_12accc:
    // 0x12accc: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
label_12acd0:
    if (ctx->pc == 0x12ACD0u) {
        ctx->pc = 0x12ACD4u;
        goto label_12acd4;
    }
    ctx->pc = 0x12ACCCu;
    {
        const bool branch_taken_0x12accc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12accc) {
            ctx->pc = 0x12AA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aa4c;
        }
    }
    ctx->pc = 0x12ACD4u;
label_12acd4:
    // 0x12acd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12acd8:
    // 0x12acd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12acd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12acdc:
    // 0x12acdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12acdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12ace0:
    // 0x12ace0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12ace0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12ace4:
    // 0x12ace4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12ace4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12ace8:
    // 0x12ace8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ace8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12acec:
    // 0x12acec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12acecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12acf0:
    // 0x12acf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12acf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12acf4:
    // 0x12acf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12acf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12acf8:
    // 0x12acf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12acf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12acfc:
    // 0x12acfc: 0x3e00008  jr          $ra
label_12ad00:
    if (ctx->pc == 0x12AD00u) {
        ctx->pc = 0x12AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACFCu;
        // 0x12ad00: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD04u;
        goto label_fallthrough_0x12acfc;
    }
    ctx->pc = 0x12ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACFCu;
        // 0x12ad00: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12acfc:
    ctx->pc = 0x12AD04u;
}
