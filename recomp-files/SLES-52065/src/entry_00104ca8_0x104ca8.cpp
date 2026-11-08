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

// Function: entry_00104ca8
// Address: 0x104ca8 - 0x104d0c
void entry_00104ca8_0x104ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ca8_0x104ca8");
#endif

    switch (ctx->pc) {
        case 0x104cb0u: goto label_104cb0;
        case 0x104cc4u: goto label_104cc4;
        case 0x104cfcu: goto label_104cfc;
        default: break;
    }

    ctx->pc = 0x104ca8u;

    // 0x104ca8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104CA8u;
    SET_GPR_U32(ctx, 31, 0x104CB0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104CA8u, 0x104CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CB0u;
label_104cb0:
    // 0x104cb0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104CB0u;
    {
        const bool branch_taken_0x104cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CB0u;
        // 0x104cb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cb0) {
            ctx->pc = 0x104D1Cu;
            return;
        }
    }
    ctx->pc = 0x104CB8u;
    // 0x104cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cbc: 0xc056360  jal         func_158D80
    ctx->pc = 0x104CBCu;
    SET_GPR_U32(ctx, 31, 0x104CC4u);
    ctx->pc = 0x104CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CBCu;
    // 0x104cc0: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104CBCu, 0x104CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CC4u;
label_104cc4:
    // 0x104cc4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104cc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ccc: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104cd0: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104cd4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104cd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x104cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x104cdc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104ce0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104ce4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104ce8: 0x246379f0  addiu       $v1, $v1, 0x79F0
    ctx->pc = 0x104ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31216));
    // 0x104cec: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104cf0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x104cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104cf4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104CF4u;
    SET_GPR_U32(ctx, 31, 0x104CFCu);
    ctx->pc = 0x104CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CF4u;
    // 0x104cf8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104CF4u, 0x104CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CFCu;
label_104cfc:
    // 0x104cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104CFCu;
    {
        const bool branch_taken_0x104cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104cfc) {
            ctx->pc = 0x104D0Cu;
            return;
        }
    }
    ctx->pc = 0x104D04u;
    // 0x104d04: 0xc04a630  jal         func_1298C0
    ctx->pc = 0x104D04u;
    SET_GPR_U32(ctx, 31, 0x104D0Cu);
    ctx->pc = 0x104D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D04u;
    // 0x104d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298C0u, 0x104D04u, 0x104D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D0Cu;
}
