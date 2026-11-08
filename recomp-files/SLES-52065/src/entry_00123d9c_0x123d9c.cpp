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

// Function: entry_00123d9c
// Address: 0x123d9c - 0x123e20
void entry_00123d9c_0x123d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123d9c_0x123d9c");
#endif

    switch (ctx->pc) {
        case 0x123dc4u: goto label_123dc4;
        case 0x123de4u: goto label_123de4;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e1cu: goto label_123e1c;
        default: break;
    }

    ctx->pc = 0x123d9cu;

    // 0x123d9c: 0x0  nop
    ctx->pc = 0x123d9cu;
    // NOP
    // 0x123da0: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x123da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x123da4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x123da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x123da8: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x123da8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x123dac: 0x8e91008c  lw          $s1, 0x8C($s4)
    ctx->pc = 0x123dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x123db0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x123db4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x123db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x123db8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x123db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123dbc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x123DBCu;
    SET_GPR_U32(ctx, 31, 0x123DC4u);
    ctx->pc = 0x123DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DBCu;
    // 0x123dc0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x123DBCu, 0x123DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DC4u;
label_123dc4:
    // 0x123dc4: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x123dc8: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x123dcc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x123dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123dd4: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x123dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    // 0x123dd8: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x123dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
    // 0x123ddc: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x123DDCu;
    SET_GPR_U32(ctx, 31, 0x123DE4u);
    ctx->pc = 0x123DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DDCu;
    // 0x123de0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x123DDCu, 0x123DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DE4u;
label_123de4:
    // 0x123de4: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x123de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x123de8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x123de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x123dec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123DECu;
    {
        const bool branch_taken_0x123dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DECu;
        // 0x123df0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dec) {
            ctx->pc = 0x123E20u;
            return;
        }
    }
    ctx->pc = 0x123DF4u;
    // 0x123df4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x123DF4u;
    SET_GPR_U32(ctx, 31, 0x123DFCu);
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x123DF4u, 0x123DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DFCu;
label_123dfc:
    // 0x123dfc: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x123e00: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x123e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x123e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e08: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x123e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    // 0x123e0c: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x123e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
    // 0x123e10: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x123e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x123e14: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x123E14u;
    SET_GPR_U32(ctx, 31, 0x123E1Cu);
    ctx->pc = 0x123E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E14u;
    // 0x123e18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x123E14u, 0x123E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E1Cu;
label_123e1c:
    // 0x123e1c: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x123e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x123e20u;
}
