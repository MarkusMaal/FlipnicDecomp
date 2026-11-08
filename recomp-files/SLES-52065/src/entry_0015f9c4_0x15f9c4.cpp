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

// Function: entry_0015f9c4
// Address: 0x15f9c4 - 0x15fa88
void entry_0015f9c4_0x15f9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f9c4_0x15f9c4");
#endif

    switch (ctx->pc) {
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa50u: goto label_15fa50;
        default: break;
    }

    ctx->pc = 0x15f9c4u;

label_15f9c4:
    // 0x15f9c4: 0x0  nop
    ctx->pc = 0x15f9c4u;
    // NOP
label_15f9c8:
    // 0x15f9c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f9cc:
    // 0x15f9cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f9d0:
    // 0x15f9d0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f9d4:
    // 0x15f9d4: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f9d8:
    // 0x15f9d8: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_15f9dc:
    if (ctx->pc == 0x15F9DCu) {
        ctx->pc = 0x15F9E0u;
        goto label_15f9e0;
    }
    ctx->pc = 0x15F9D8u;
    {
        const bool branch_taken_0x15f9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f9d8) {
            ctx->pc = 0x15FAA4u;
            return;
        }
    }
    ctx->pc = 0x15F9E0u;
label_15f9e0:
    // 0x15f9e0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f9e4:
    // 0x15f9e4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f9e8:
    // 0x15f9e8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f9ec:
    // 0x15f9ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f9f0:
    // 0x15f9f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f9f4:
    // 0x15f9f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f9f8:
    // 0x15f9f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f9fc:
    // 0x15f9fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15fa00:
    // 0x15fa00: 0x320f809  jalr        $t9
label_15fa04:
    if (ctx->pc == 0x15FA04u) {
        ctx->pc = 0x15FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA00u;
        // 0x15fa04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA08u;
        goto label_15fa08;
    }
    ctx->pc = 0x15FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FA08u);
        ctx->pc = 0x15FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA00u;
        // 0x15fa04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA00u, 0x15FA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA08u;
label_15fa08:
    // 0x15fa08: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15fa0c:
    // 0x15fa0c: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_15fa10:
    if (ctx->pc == 0x15FA10u) {
        ctx->pc = 0x15FA14u;
        goto label_15fa14;
    }
    ctx->pc = 0x15FA0Cu;
    {
        const bool branch_taken_0x15fa0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fa0c) {
            ctx->pc = 0x15FAA4u;
            return;
        }
    }
    ctx->pc = 0x15FA14u;
label_15fa14:
    // 0x15fa14: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15fa18:
    // 0x15fa18: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fa1c:
    // 0x15fa1c: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15fa20:
    // 0x15fa20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fa24:
    // 0x15fa24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15fa28:
    // 0x15fa28: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa2c:
    // 0x15fa2c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15fa30:
    // 0x15fa30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15fa34:
    // 0x15fa34: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15fa38:
    // 0x15fa38: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15fa38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15fa3c:
    // 0x15fa3c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15fa40:
    // 0x15fa40: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15fa44:
    // 0x15fa44: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15fa48:
    // 0x15fa48: 0x320f809  jalr        $t9
label_15fa4c:
    if (ctx->pc == 0x15FA4Cu) {
        ctx->pc = 0x15FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA48u;
        // 0x15fa4c: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA50u;
        goto label_15fa50;
    }
    ctx->pc = 0x15FA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FA50u);
        ctx->pc = 0x15FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA48u;
        // 0x15fa4c: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA48u, 0x15FA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA50u;
label_15fa50:
    // 0x15fa50: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15fa50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15fa54:
    // 0x15fa54: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15fa58:
    if (ctx->pc == 0x15FA58u) {
        ctx->pc = 0x15FA5Cu;
        goto label_15fa5c;
    }
    ctx->pc = 0x15FA54u;
    {
        const bool branch_taken_0x15fa54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fa54) {
            ctx->pc = 0x15FAA4u;
            return;
        }
    }
    ctx->pc = 0x15FA5Cu;
label_15fa5c:
    // 0x15fa5c: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15fa60:
    if (ctx->pc == 0x15FA60u) {
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA64u;
        goto label_15fa64;
    }
    ctx->pc = 0x15FA5Cu;
    {
        const bool branch_taken_0x15fa5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa5c) {
            ctx->pc = 0x15FA88u;
            return;
        }
    }
    ctx->pc = 0x15FA64u;
label_15fa64:
    // 0x15fa64: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa68:
    // 0x15fa68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fa6c:
    // 0x15fa6c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15fa70:
    // 0x15fa70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15fa74:
    // 0x15fa74: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15fa78:
    // 0x15fa78: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15fa7c:
    // 0x15fa7c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15fa80:
    if (ctx->pc == 0x15FA80u) {
        ctx->pc = 0x15FA84u;
        goto label_15fa84;
    }
    ctx->pc = 0x15FA7Cu;
    {
        const bool branch_taken_0x15fa7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15fa7c) {
            ctx->pc = 0x15FA88u;
            return;
        }
    }
    ctx->pc = 0x15FA84u;
label_15fa84:
    // 0x15fa84: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15fa84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15fa88u;
}
