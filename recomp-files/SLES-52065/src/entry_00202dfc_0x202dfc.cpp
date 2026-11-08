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

// Function: entry_00202dfc
// Address: 0x202dfc - 0x202e54
void entry_00202dfc_0x202dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202dfc_0x202dfc");
#endif

    switch (ctx->pc) {
        case 0x202e24u: goto label_202e24;
        case 0x202e2cu: goto label_202e2c;
        case 0x202e38u: goto label_202e38;
        default: break;
    }

    ctx->pc = 0x202dfcu;

    // 0x202dfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202e00: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x202e00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202e04: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x202e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202e08: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x202e0c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x202e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x202e10: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x202e10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x202e14: 0x14520024  bne         $v0, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x202E14u;
    {
        const bool branch_taken_0x202e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x202E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E14u;
        // 0x202e18: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e14) {
            ctx->pc = 0x202EA8u;
            return;
        }
    }
    ctx->pc = 0x202E1Cu;
    // 0x202e1c: 0xc081a0c  jal         func_206830
    ctx->pc = 0x202E1Cu;
    SET_GPR_U32(ctx, 31, 0x202E24u);
    ctx->pc = 0x202E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E1Cu;
    // 0x202e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206830u, 0x202E1Cu, 0x202E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E24u;
label_202e24:
    // 0x202e24: 0xc081a60  jal         func_206980
    ctx->pc = 0x202E24u;
    SET_GPR_U32(ctx, 31, 0x202E2Cu);
    ctx->pc = 0x202E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E24u;
    // 0x202e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x202E24u, 0x202E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E2Cu;
label_202e2c:
    // 0x202e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e30: 0xc082014  jal         func_208050
    ctx->pc = 0x202E30u;
    SET_GPR_U32(ctx, 31, 0x202E38u);
    ctx->pc = 0x202E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E30u;
    // 0x202e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202E30u, 0x202E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E38u;
label_202e38:
    // 0x202e38: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x202E38u;
    {
        const bool branch_taken_0x202e38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E38u;
        // 0x202e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e38) {
            ctx->pc = 0x202E54u;
            return;
        }
    }
    ctx->pc = 0x202E40u;
    // 0x202e40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202e44: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x202e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x202e48: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x202e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x202e4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202E4Cu;
    {
        const bool branch_taken_0x202e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e4c) {
            ctx->pc = 0x202E8Cu;
            return;
        }
    }
    ctx->pc = 0x202E54u;
}
