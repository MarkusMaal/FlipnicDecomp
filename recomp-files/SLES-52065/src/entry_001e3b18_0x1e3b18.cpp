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

// Function: entry_001e3b18
// Address: 0x1e3b18 - 0x1e3bb4
void entry_001e3b18_0x1e3b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3b18_0x1e3b18");
#endif

    ctx->pc = 0x1e3b18u;

    // 0x1e3b18: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3b1c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x1e3b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e3b20: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1E3B20u;
    {
        const bool branch_taken_0x1e3b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b20) {
            ctx->pc = 0x1E3A00u;
            return;
        }
    }
    ctx->pc = 0x1E3B28u;
    // 0x1e3b28: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e3b2c: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e3b2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e3b30: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3b34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e3b38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3b3c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1e3b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3b40: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e3b44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3b48: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E3B48u;
    {
        const bool branch_taken_0x1e3b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B48u;
        // 0x1e3b4c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b48) {
            ctx->pc = 0x1E3C18u;
            return;
        }
    }
    ctx->pc = 0x1E3B50u;
    // 0x1e3b50: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3b54: 0x10963c  dsll32      $s2, $s0, 24
    ctx->pc = 0x1e3b54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1e3b58: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x1e3b58u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x1e3b5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e3b60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e3b64: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E3B64u;
    {
        const bool branch_taken_0x1e3b64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B64u;
        // 0x1e3b68: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b64) {
            ctx->pc = 0x1E3BD4u;
            return;
        }
    }
    ctx->pc = 0x1E3B6Cu;
    // 0x1e3b6c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3b70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e3b74: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e3b78: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e3b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e3b7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3b80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3B80u;
    {
        const bool branch_taken_0x1e3b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B80u;
        // 0x1e3b84: 0x12263c  dsll32      $a0, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b80) {
            ctx->pc = 0x1E3BC4u;
            return;
        }
    }
    ctx->pc = 0x1E3B88u;
    // 0x1e3b88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3b8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e3b90: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e3b90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e3b94: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e3b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3b98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3b9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3ba0: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3BA0u;
    {
        const bool branch_taken_0x1e3ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BA0u;
        // 0x1e3ba4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ba0) {
            ctx->pc = 0x1E3BB4u;
            return;
        }
    }
    ctx->pc = 0x1E3BA8u;
    // 0x1e3ba8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e3bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3BACu;
    {
        const bool branch_taken_0x1e3bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BACu;
        // 0x1e3bb0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bac) {
            ctx->pc = 0x1E3BBCu;
            return;
        }
    }
    ctx->pc = 0x1E3BB4u;
}
