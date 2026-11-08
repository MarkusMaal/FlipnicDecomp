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

// Function: entry_00202ca0
// Address: 0x202ca0 - 0x202d64
void entry_00202ca0_0x202ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202ca0_0x202ca0");
#endif

    switch (ctx->pc) {
        case 0x202ce8u: goto label_202ce8;
        case 0x202cf4u: goto label_202cf4;
        case 0x202d00u: goto label_202d00;
        default: break;
    }

    ctx->pc = 0x202ca0u;

    // 0x202ca0: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x202ca0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202ca4: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x202ca8: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x202ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x202cac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x202cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x202cb0: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x202cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x202cb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202cb8: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x202CB8u;
    {
        const bool branch_taken_0x202cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x202CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CB8u;
        // 0x202cbc: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cb8) {
            ctx->pc = 0x202D78u;
            return;
        }
    }
    ctx->pc = 0x202CC0u;
    // 0x202cc0: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x202cc4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x202cc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x202cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202ccc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x202cccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x202cd0: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x202cd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x202cd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202cd8: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x202cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x202cdc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x202cdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x202ce0: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202CE0u;
    SET_GPR_U32(ctx, 31, 0x202CE8u);
    ctx->pc = 0x202CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CE0u;
    // 0x202ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202CE0u, 0x202CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CE8u;
label_202ce8:
    // 0x202ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cec: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202CECu;
    SET_GPR_U32(ctx, 31, 0x202CF4u);
    ctx->pc = 0x202CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CECu;
    // 0x202cf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202CECu, 0x202CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CF4u;
label_202cf4:
    // 0x202cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cf8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202CF8u;
    SET_GPR_U32(ctx, 31, 0x202D00u);
    ctx->pc = 0x202CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CF8u;
    // 0x202cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202CF8u, 0x202D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D00u;
label_202d00:
    // 0x202d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d04: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x202d08: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x202d08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202d0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x202d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x202d10: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x202d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x202d14: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x202d14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x202d18: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x202D18u;
    {
        const bool branch_taken_0x202d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D18u;
        // 0x202d1c: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d18) {
            ctx->pc = 0x202D64u;
            return;
        }
    }
    ctx->pc = 0x202D20u;
    // 0x202d20: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x202d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x202d24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x202d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x202d2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x202d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x202d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d38: 0x0  nop
    ctx->pc = 0x202d38u;
    // NOP
    // 0x202d3c: 0x0  nop
    ctx->pc = 0x202d3cu;
    // NOP
    // 0x202d40: 0x0  nop
    ctx->pc = 0x202d40u;
    // NOP
    // 0x202d44: 0x12c2feb8  beq         $s6, $v0, . + 4 + (-0x148 << 2)
    ctx->pc = 0x202D44u;
    {
        const bool branch_taken_0x202d44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D44u;
        // 0x202d48: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d44) {
            ctx->pc = 0x202828u;
            return;
        }
    }
    ctx->pc = 0x202D4Cu;
    // 0x202d4c: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x202d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x202d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202d58: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x202d58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x202d5c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x202D5Cu;
    {
        const bool branch_taken_0x202d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D5Cu;
        // 0x202d60: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d5c) {
            ctx->pc = 0x202EA4u;
            return;
        }
    }
    ctx->pc = 0x202D64u;
}
