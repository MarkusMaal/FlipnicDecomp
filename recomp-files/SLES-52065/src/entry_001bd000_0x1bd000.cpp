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

// Function: entry_001bd000
// Address: 0x1bd000 - 0x1bd050
void entry_001bd000_0x1bd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd000_0x1bd000");
#endif

    switch (ctx->pc) {
        case 0x1bd014u: goto label_1bd014;
        default: break;
    }

    ctx->pc = 0x1bd000u;

    // 0x1bd000: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd004: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd00c: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BD00Cu;
    SET_GPR_U32(ctx, 31, 0x1BD014u);
    ctx->pc = 0x1BD010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD00Cu;
    // 0x1bd010: 0x24a51208  addiu       $a1, $a1, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BD00Cu, 0x1BD014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD014u;
label_1bd014:
    // 0x1bd014: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bd014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bd018: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1bd01c: 0x24423068  addiu       $v0, $v0, 0x3068
    ctx->pc = 0x1bd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12392));
    // 0x1bd020: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1bd024: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1bd024u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x213068u));
    // 0x1bd028: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bd028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bd02c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1bd02cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bd030: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x1bd034: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x213070u));
    // 0x1bd038: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1bd038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bd03c: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bd040: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD040u;
    {
        const bool branch_taken_0x1bd040 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD040u;
        // 0x1bd044: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd040) {
            ctx->pc = 0x1BD050u;
            return;
        }
    }
    ctx->pc = 0x1BD048u;
    // 0x1bd048: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1bd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1bd04c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bd04cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bd050u;
}
