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

// Function: entry_00120a2c
// Address: 0x120a2c - 0x120a70
void entry_00120a2c_0x120a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120a2c_0x120a2c");
#endif

    ctx->pc = 0x120a2cu;

    // 0x120a2c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x120a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x120a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120a34: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x120a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120a38: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x120a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x120a3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x120a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120a40: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x120A40u;
    {
        const bool branch_taken_0x120a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A40u;
        // 0x120a44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a40) {
            ctx->pc = 0x120A74u;
            return;
        }
    }
    ctx->pc = 0x120A48u;
    // 0x120a48: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x120a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x120a4c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x120a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x120a50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x120a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x120a54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120A54u;
    {
        const bool branch_taken_0x120a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120a54) {
            ctx->pc = 0x120A70u;
            return;
        }
    }
    ctx->pc = 0x120A5Cu;
    // 0x120a5c: 0x93a20039  lbu         $v0, 0x39($sp)
    ctx->pc = 0x120a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
    // 0x120a60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120A60u;
    {
        const bool branch_taken_0x120a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120a60) {
            ctx->pc = 0x120A70u;
            return;
        }
    }
    ctx->pc = 0x120A68u;
    // 0x120a68: 0xc048208  jal         func_120820
    ctx->pc = 0x120A68u;
    SET_GPR_U32(ctx, 31, 0x120A70u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x120A68u, 0x120A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A70u;
}
