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

// Function: entry_00188d98
// Address: 0x188d98 - 0x188dc4
void entry_00188d98_0x188d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d98_0x188d98");
#endif

    switch (ctx->pc) {
        case 0x188dacu: goto label_188dac;
        default: break;
    }

    ctx->pc = 0x188d98u;

label_188d98:
    // 0x188d98: 0x8eb20050  lw          $s2, 0x50($s5)
    ctx->pc = 0x188d98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_188d9c:
    // 0x188d9c: 0x8fb300d8  lw          $s3, 0xD8($sp)
    ctx->pc = 0x188d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_188da0:
    // 0x188da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188da4:
    // 0x188da4: 0xc0485c0  jal         func_121700
label_188da8:
    if (ctx->pc == 0x188DA8u) {
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DACu;
        goto label_188dac;
    }
    ctx->pc = 0x188DA4u;
    SET_GPR_U32(ctx, 31, 0x188DACu);
    ctx->pc = 0x188DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DA4u;
    // 0x188da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x188DA4u, 0x188DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DACu;
label_188dac:
    // 0x188dac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_188db0:
    // 0x188db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188db4:
    // 0x188db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x188db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_188db8:
    // 0x188db8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_188dbc:
    // 0x188dbc: 0x320f809  jalr        $t9
label_188dc0:
    if (ctx->pc == 0x188DC0u) {
        ctx->pc = 0x188DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DBCu;
        // 0x188dc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DC4u;
        goto label_fallthrough_0x188dbc;
    }
    ctx->pc = 0x188DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x188DC4u);
        ctx->pc = 0x188DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DBCu;
        // 0x188dc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188DBCu, 0x188DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x188dbc:
    ctx->pc = 0x188DC4u;
}
