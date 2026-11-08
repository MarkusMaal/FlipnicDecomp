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

// Function: entry_0014e234
// Address: 0x14e234 - 0x14e284
void entry_0014e234_0x14e234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e234_0x14e234");
#endif

    switch (ctx->pc) {
        case 0x14e244u: goto label_14e244;
        case 0x14e250u: goto label_14e250;
        case 0x14e258u: goto label_14e258;
        case 0x14e270u: goto label_14e270;
        default: break;
    }

    ctx->pc = 0x14e234u;

    // 0x14e234: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E234u;
    {
        const bool branch_taken_0x14e234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E234u;
        // 0x14e238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e234) {
            ctx->pc = 0x14E284u;
            return;
        }
    }
    ctx->pc = 0x14E23Cu;
    // 0x14e23c: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E23Cu;
    SET_GPR_U32(ctx, 31, 0x14E244u);
    ctx->pc = 0x14E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E23Cu;
    // 0x14e240: 0xafb000c0  sw          $s0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E23Cu, 0x14E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E244u;
label_14e244:
    // 0x14e244: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14e248: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E248u;
    SET_GPR_U32(ctx, 31, 0x14E250u);
    ctx->pc = 0x14E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E248u;
    // 0x14e24c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E248u, 0x14E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E250u;
label_14e250:
    // 0x14e250: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E250u;
    SET_GPR_U32(ctx, 31, 0x14E258u);
    ctx->pc = 0x14E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E250u;
    // 0x14e254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E250u, 0x14E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E258u;
label_14e258:
    // 0x14e258: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e260: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e264: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e268: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E268u;
    SET_GPR_U32(ctx, 31, 0x14E270u);
    ctx->pc = 0x14E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E268u;
    // 0x14e26c: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E268u, 0x14E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E270u;
label_14e270:
    // 0x14e270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e274: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x14e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14e278: 0x83a700bc  lb          $a3, 0xBC($sp)
    ctx->pc = 0x14e278u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14e27c: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E27Cu;
    SET_GPR_U32(ctx, 31, 0x14E284u);
    ctx->pc = 0x14E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E27Cu;
    // 0x14e280: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E27Cu, 0x14E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E284u;
}
