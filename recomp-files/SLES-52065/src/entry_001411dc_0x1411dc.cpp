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

// Function: entry_001411dc
// Address: 0x1411dc - 0x141254
void entry_001411dc_0x1411dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001411dc_0x1411dc");
#endif

    switch (ctx->pc) {
        case 0x141200u: goto label_141200;
        default: break;
    }

    ctx->pc = 0x1411dcu;

    // 0x1411dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1411dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1411e0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1411e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1411e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411e8: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x1411e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x1411ec: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1411ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1411f0: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x1411f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x1411f4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1411f8: 0xc050184  jal         func_140610
    ctx->pc = 0x1411F8u;
    SET_GPR_U32(ctx, 31, 0x141200u);
    ctx->pc = 0x1411FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411F8u;
    // 0x1411fc: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1411F8u, 0x141200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141200u;
label_141200:
    // 0x141200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141204: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x141204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x141208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14120c: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x14120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x141210: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141214: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x141214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
    // 0x141218: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x141218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14121c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141220: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141224: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x141228: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x141228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14122c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14122Cu;
    {
        const bool branch_taken_0x14122c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14122Cu;
        // 0x141230: 0x27aa0110  addiu       $t2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14122c) {
            ctx->pc = 0x141254u;
            return;
        }
    }
    ctx->pc = 0x141234u;
    // 0x141234: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x141234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141238: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x141238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14123c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141244: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x141244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x141248: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x141248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x14124c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14124Cu;
    {
        const bool branch_taken_0x14124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14124Cu;
        // 0x141250: 0xafb20100  sw          $s2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14124c) {
            ctx->pc = 0x141274u;
            return;
        }
    }
    ctx->pc = 0x141254u;
}
