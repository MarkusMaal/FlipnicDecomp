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

// Function: entry_0010e0ac
// Address: 0x10e0ac - 0x10e12c
void entry_0010e0ac_0x10e0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e0ac_0x10e0ac");
#endif

    ctx->pc = 0x10e0acu;

label_10e0ac:
    // 0x10e0ac: 0x0  nop
    ctx->pc = 0x10e0acu;
    // NOP
label_10e0b0:
    // 0x10e0b0: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x10e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_10e0b4:
    // 0x10e0b4: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x10e0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10e0b8:
    // 0x10e0b8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_10e0bc:
    if (ctx->pc == 0x10E0BCu) {
        ctx->pc = 0x10E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B8u;
        // 0x10e0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0C0u;
        goto label_10e0c0;
    }
    ctx->pc = 0x10E0B8u;
    {
        const bool branch_taken_0x10e0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B8u;
        // 0x10e0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0b8) {
            ctx->pc = 0x10E018u;
            return;
        }
    }
    ctx->pc = 0x10E0C0u;
label_10e0c0:
    // 0x10e0c0: 0x1485001a  bne         $a0, $a1, . + 4 + (0x1A << 2)
label_10e0c4:
    if (ctx->pc == 0x10E0C4u) {
        ctx->pc = 0x10E0C8u;
        goto label_10e0c8;
    }
    ctx->pc = 0x10E0C0u;
    {
        const bool branch_taken_0x10e0c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x10e0c0) {
            ctx->pc = 0x10E12Cu;
            return;
        }
    }
    ctx->pc = 0x10E0C8u;
label_10e0c8:
    // 0x10e0c8: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x10e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_10e0cc:
    // 0x10e0cc: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x10e0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_10e0d0:
    // 0x10e0d0: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_10e0d4:
    if (ctx->pc == 0x10E0D4u) {
        ctx->pc = 0x10E0D8u;
        goto label_10e0d8;
    }
    ctx->pc = 0x10E0D0u;
    {
        const bool branch_taken_0x10e0d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e0d0) {
            ctx->pc = 0x10E12Cu;
            return;
        }
    }
    ctx->pc = 0x10E0D8u;
label_10e0d8:
    // 0x10e0d8: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x10e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_10e0dc:
    // 0x10e0dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10e0e0:
    // 0x10e0e0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x10e0e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10e0e4:
    // 0x10e0e4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_10e0e8:
    if (ctx->pc == 0x10E0E8u) {
        ctx->pc = 0x10E0ECu;
        goto label_10e0ec;
    }
    ctx->pc = 0x10E0E4u;
    {
        const bool branch_taken_0x10e0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e0e4) {
            ctx->pc = 0x10E12Cu;
            return;
        }
    }
    ctx->pc = 0x10E0ECu;
label_10e0ec:
    // 0x10e0ec: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x10e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
label_10e0f0:
    // 0x10e0f0: 0x8e060224  lw          $a2, 0x224($s0)
    ctx->pc = 0x10e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e0f4:
    // 0x10e0f4: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x10e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e0f8:
    // 0x10e0f8: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x10e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e0fc:
    // 0x10e0fc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e100:
    // 0x10e100: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_10e104:
    // 0x10e104: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10e104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10e108:
    // 0x10e108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e10c:
    // 0x10e10c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e10cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e110:
    // 0x10e110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e114:
    // 0x10e114: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e118:
    // 0x10e118: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e11c:
    // 0x10e11c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10e11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e120:
    // 0x10e120: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e124:
    // 0x10e124: 0x320f809  jalr        $t9
label_10e128:
    if (ctx->pc == 0x10E128u) {
        ctx->pc = 0x10E12Cu;
        goto label_fallthrough_0x10e124;
    }
    ctx->pc = 0x10E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E12Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E124u, 0x10E12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10e124:
    ctx->pc = 0x10E12Cu;
}
