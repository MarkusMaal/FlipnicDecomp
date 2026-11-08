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

// Function: FUN_00134cb0
// Address: 0x134cb0 - 0x134d94
void FUN_00134cb0_0x134cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134cb0_0x134cb0");
#endif

    switch (ctx->pc) {
        case 0x134d10u: goto label_134d10;
        case 0x134d20u: goto label_134d20;
        case 0x134d54u: goto label_134d54;
        case 0x134d64u: goto label_134d64;
        case 0x134d74u: goto label_134d74;
        case 0x134d84u: goto label_134d84;
        default: break;
    }

    ctx->pc = 0x134cb0u;

    // 0x134cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134cb4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x134cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x134cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134cbc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x134cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x134cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134cc4: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x134cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x134cc8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x134cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x134ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cd0: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x134cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x134cd4: 0x24a50e60  addiu       $a1, $a1, 0xE60
    ctx->pc = 0x134cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3680));
    // 0x134cd8: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x134cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x134cdc: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x134cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x134ce0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134ce4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x134ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x134ce8: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x134ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x134cec: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x134cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x134cf0: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x134cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x134cf4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x134cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x134cf8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x134cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x134cfc: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x134cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x134d00: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x134d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x134d04: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x134d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x134d08: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x134D08u;
    SET_GPR_U32(ctx, 31, 0x134D10u);
    ctx->pc = 0x134D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D08u;
    // 0x134d0c: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x134D08u, 0x134D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D10u;
label_134d10:
    // 0x134d10: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x134d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x134d14: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x134d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x134d18: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x134D18u;
    SET_GPR_U32(ctx, 31, 0x134D20u);
    ctx->pc = 0x134D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D18u;
    // 0x134d1c: 0x24a50e60  addiu       $a1, $a1, 0xE60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x134D18u, 0x134D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D20u;
label_134d20:
    // 0x134d20: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x134d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x134d24: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x134d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x134d28: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x134d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x134d2c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x134d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x134d30: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x134d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x134d34: 0x24a50e70  addiu       $a1, $a1, 0xE70
    ctx->pc = 0x134d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
    // 0x134d38: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x134d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x134d3c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x134d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x134d40: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x134d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x134d44: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x134d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x134d48: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x134d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x134d4c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x134D4Cu;
    SET_GPR_U32(ctx, 31, 0x134D54u);
    ctx->pc = 0x134D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D4Cu;
    // 0x134d50: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x134D4Cu, 0x134D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D54u;
label_134d54:
    // 0x134d54: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x134d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x134d58: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x134d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x134d5c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x134D5Cu;
    SET_GPR_U32(ctx, 31, 0x134D64u);
    ctx->pc = 0x134D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D5Cu;
    // 0x134d60: 0x24a50e80  addiu       $a1, $a1, 0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x134D5Cu, 0x134D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D64u;
label_134d64:
    // 0x134d64: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x134d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x134d68: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x134d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x134d6c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x134D6Cu;
    SET_GPR_U32(ctx, 31, 0x134D74u);
    ctx->pc = 0x134D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D6Cu;
    // 0x134d70: 0x24a50e90  addiu       $a1, $a1, 0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x134D6Cu, 0x134D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D74u;
label_134d74:
    // 0x134d74: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x134d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x134d78: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x134d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x134d7c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x134D7Cu;
    SET_GPR_U32(ctx, 31, 0x134D84u);
    ctx->pc = 0x134D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D7Cu;
    // 0x134d80: 0x24a50ea0  addiu       $a1, $a1, 0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x134D7Cu, 0x134D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D84u;
label_134d84:
    // 0x134d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x134D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D8Cu;
        // 0x134d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134D94u;
}
