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

// Function: entry_00118de0
// Address: 0x118de0 - 0x118e44
void entry_00118de0_0x118de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118de0_0x118de0");
#endif

    switch (ctx->pc) {
        case 0x118de8u: goto label_118de8;
        case 0x118e14u: goto label_118e14;
        case 0x118e2cu: goto label_118e2c;
        case 0x118e3cu: goto label_118e3c;
        default: break;
    }

    ctx->pc = 0x118de0u;

    // 0x118de0: 0xc045c98  jal         func_117260
    ctx->pc = 0x118DE0u;
    SET_GPR_U32(ctx, 31, 0x118DE8u);
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x118DE0u, 0x118DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DE8u;
label_118de8:
    // 0x118de8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118dec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118df0: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x118df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x118df4: 0x27b0008c  addiu       $s0, $sp, 0x8C
    ctx->pc = 0x118df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x118df8: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x118df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x118dfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118e00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x118e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x118e08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118e0c: 0xc0462a4  jal         func_118A90
    ctx->pc = 0x118E0Cu;
    SET_GPR_U32(ctx, 31, 0x118E14u);
    ctx->pc = 0x118E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E0Cu;
    // 0x118e10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A90u, 0x118E0Cu, 0x118E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E14u;
label_118e14:
    // 0x118e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e18: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x118E18u;
    {
        const bool branch_taken_0x118e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x118E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E18u;
        // 0x118e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e18) {
            ctx->pc = 0x118E44u;
            return;
        }
    }
    ctx->pc = 0x118E20u;
    // 0x118e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e24: 0xc046400  jal         func_119000
    ctx->pc = 0x118E24u;
    SET_GPR_U32(ctx, 31, 0x118E2Cu);
    ctx->pc = 0x118E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E24u;
    // 0x118e28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119000u, 0x118E24u, 0x118E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E2Cu;
label_118e2c:
    // 0x118e2c: 0xaf82802c  sw          $v0, -0x7FD4($gp)
    ctx->pc = 0x118e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 2));
    // 0x118e30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e34: 0xc054660  jal         func_151980
    ctx->pc = 0x118E34u;
    SET_GPR_U32(ctx, 31, 0x118E3Cu);
    ctx->pc = 0x118E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E34u;
    // 0x118e38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x118E34u, 0x118E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E3Cu;
label_118e3c:
    // 0x118e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118E3Cu;
    {
        const bool branch_taken_0x118e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118e3c) {
            ctx->pc = 0x118E4Cu;
            return;
        }
    }
    ctx->pc = 0x118E44u;
}
