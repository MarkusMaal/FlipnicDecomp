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

// Function: entry_00181c00
// Address: 0x181c00 - 0x181c90
void entry_00181c00_0x181c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c00_0x181c00");
#endif

    switch (ctx->pc) {
        case 0x181c14u: goto label_181c14;
        case 0x181c74u: goto label_181c74;
        case 0x181c8cu: goto label_181c8c;
        default: break;
    }

    ctx->pc = 0x181c00u;

label_181c00:
    // 0x181c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c04:
    // 0x181c04: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181c08:
    // 0x181c08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x181c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_181c0c:
    // 0x181c0c: 0xc061734  jal         func_185CD0
label_181c10:
    if (ctx->pc == 0x181C10u) {
        ctx->pc = 0x181C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C0Cu;
        // 0x181c10: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C14u;
        goto label_181c14;
    }
    ctx->pc = 0x181C0Cu;
    SET_GPR_U32(ctx, 31, 0x181C14u);
    ctx->pc = 0x181C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C0Cu;
    // 0x181c10: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181C0Cu, 0x181C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C14u;
label_181c14:
    // 0x181c14: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x181c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181c18:
    // 0x181c18: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x181c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_181c1c:
    // 0x181c1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x181c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_181c20:
    // 0x181c20: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_181c24:
    // 0x181c24: 0x24a58ac0  addiu       $a1, $a1, -0x7540
    ctx->pc = 0x181c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
label_181c28:
    // 0x181c28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x181c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_181c2c:
    // 0x181c2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x181c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_181c30:
    // 0x181c30: 0x3448000a  ori         $t0, $v0, 0xA
    ctx->pc = 0x181c30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_181c34:
    // 0x181c34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x181c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_181c38:
    // 0x181c38: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_181c3c:
    // 0x181c3c: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x181c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_181c40:
    // 0x181c40: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x181c40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_181c44:
    // 0x181c44: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x181c44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_181c48:
    // 0x181c48: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x181c48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_181c4c:
    // 0x181c4c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x181c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_181c50:
    // 0x181c50: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x181c50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
label_181c54:
    // 0x181c54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181c58:
    // 0x181c58: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_181c5c:
    // 0x181c5c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_181c60:
    if (ctx->pc == 0x181C60u) {
        ctx->pc = 0x181C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C5Cu;
        // 0x181c60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C64u;
        goto label_181c64;
    }
    ctx->pc = 0x181C5Cu;
    {
        const bool branch_taken_0x181c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C5Cu;
        // 0x181c60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c5c) {
            ctx->pc = 0x181C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c00;
        }
    }
    ctx->pc = 0x181C64u;
label_181c64:
    // 0x181c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x181c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_181c68:
    // 0x181c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c6c:
    // 0x181c6c: 0xc0495c0  jal         func_125700
label_181c70:
    if (ctx->pc == 0x181C70u) {
        ctx->pc = 0x181C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C6Cu;
        // 0x181c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C74u;
        goto label_181c74;
    }
    ctx->pc = 0x181C6Cu;
    SET_GPR_U32(ctx, 31, 0x181C74u);
    ctx->pc = 0x181C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C6Cu;
    // 0x181c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x181C6Cu, 0x181C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C74u;
label_181c74:
    // 0x181c74: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181c78:
    // 0x181c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c7c:
    // 0x181c7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x181c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181c80:
    // 0x181c80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181c84:
    // 0x181c84: 0x320f809  jalr        $t9
label_181c88:
    if (ctx->pc == 0x181C88u) {
        ctx->pc = 0x181C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C84u;
        // 0x181c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C8Cu;
        goto label_181c8c;
    }
    ctx->pc = 0x181C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x181C8Cu);
        ctx->pc = 0x181C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C84u;
        // 0x181c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C84u, 0x181C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181C8Cu;
label_181c8c:
    // 0x181c8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x181c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181c90u;
}
