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

// Function: entry_001e4d18
// Address: 0x1e4d18 - 0x1e4d5c
void entry_001e4d18_0x1e4d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4d18_0x1e4d18");
#endif

    switch (ctx->pc) {
        case 0x1e4d28u: goto label_1e4d28;
        default: break;
    }

    ctx->pc = 0x1e4d18u;

    // 0x1e4d18: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x1e4d18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e4d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d20: 0xc079804  jal         func_1E6010
    ctx->pc = 0x1E4D20u;
    SET_GPR_U32(ctx, 31, 0x1E4D28u);
    ctx->pc = 0x1E4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D20u;
    // 0x1e4d24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6010u, 0x1E4D20u, 0x1E4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D28u;
label_1e4d28:
    // 0x1e4d28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4d2c: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4D2Cu;
    {
        const bool branch_taken_0x1e4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4d2c) {
            ctx->pc = 0x1E4D9Cu;
            return;
        }
    }
    ctx->pc = 0x1E4D34u;
    // 0x1e4d34: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e4d38: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e4d38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e4d3c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E4D3Cu;
    {
        const bool branch_taken_0x1e4d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D3Cu;
        // 0x1e4d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d3c) {
            ctx->pc = 0x1E4D94u;
            return;
        }
    }
    ctx->pc = 0x1E4D44u;
    // 0x1e4d44: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4d48: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e4d4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4D4Cu;
    {
        const bool branch_taken_0x1e4d4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D4Cu;
        // 0x1e4d50: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d4c) {
            ctx->pc = 0x1E4D5Cu;
            return;
        }
    }
    ctx->pc = 0x1E4D54u;
    // 0x1e4d54: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4d58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e4d5cu;
}
