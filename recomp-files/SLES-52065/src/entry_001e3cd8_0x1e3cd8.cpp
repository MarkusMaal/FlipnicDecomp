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

// Function: entry_001e3cd8
// Address: 0x1e3cd8 - 0x1e3d34
void entry_001e3cd8_0x1e3cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3cd8_0x1e3cd8");
#endif

    switch (ctx->pc) {
        case 0x1e3d24u: goto label_1e3d24;
        default: break;
    }

    ctx->pc = 0x1e3cd8u;

    // 0x1e3cd8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3cdc: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x1e3cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e3ce0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E3CE0u;
    {
        const bool branch_taken_0x1e3ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ce0) {
            ctx->pc = 0x1E3C78u;
            return;
        }
    }
    ctx->pc = 0x1E3CE8u;
    // 0x1e3ce8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e3cec: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e3cecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e3cf0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3cf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e3cf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3cfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d00: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1e3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e3d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3d08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E3D08u;
    {
        const bool branch_taken_0x1e3d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D08u;
        // 0x1e3d0c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d08) {
            ctx->pc = 0x1E3D34u;
            return;
        }
    }
    ctx->pc = 0x1E3D10u;
    // 0x1e3d10: 0x10363c  dsll32      $a2, $s0, 24
    ctx->pc = 0x1e3d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1e3d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e3d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d1c: 0xc0796dc  jal         func_1E5B70
    ctx->pc = 0x1E3D1Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D24u);
    ctx->pc = 0x1E3D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D1Cu;
    // 0x1e3d20: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B70u, 0x1E3D1Cu, 0x1E3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D24u;
label_1e3d24:
    // 0x1e3d24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3d28: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3D28u;
    {
        const bool branch_taken_0x1e3d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3d28) {
            ctx->pc = 0x1E3D34u;
            return;
        }
    }
    ctx->pc = 0x1E3D30u;
    // 0x1e3d30: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x1e3d30u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e3d34u;
}
