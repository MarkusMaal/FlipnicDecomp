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

// Function: entry_001aa008
// Address: 0x1aa008 - 0x1aa060
void entry_001aa008_0x1aa008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa008_0x1aa008");
#endif

    switch (ctx->pc) {
        case 0x1aa01cu: goto label_1aa01c;
        case 0x1aa058u: goto label_1aa058;
        default: break;
    }

    ctx->pc = 0x1aa008u;

    // 0x1aa008: 0xdc652818  ld          $a1, 0x2818($v1)
    ctx->pc = 0x1aa008u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 10264)));
    // 0x1aa00c: 0x26a40820  addiu       $a0, $s5, 0x820
    ctx->pc = 0x1aa00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
    // 0x1aa010: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x1aa010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1aa014: 0xc069744  jal         func_1A5D10
    ctx->pc = 0x1AA014u;
    SET_GPR_U32(ctx, 31, 0x1AA01Cu);
    ctx->pc = 0x1AA018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA014u;
    // 0x1aa018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D10u, 0x1AA014u, 0x1AA01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA01Cu;
label_1aa01c:
    // 0x1aa01c: 0x8ea30690  lw          $v1, 0x690($s5)
    ctx->pc = 0x1aa01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1680)));
    // 0x1aa020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aa028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa02c: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x1aa02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x1aa030: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1aa030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1aa034: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1aa034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1aa038: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x1aa038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1aa03c: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x1aa03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x1aa040: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1aa040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1aa044: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1aa048: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x1aa048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1aa04c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1aa04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa050: 0xc064b08  jal         func_192C20
    ctx->pc = 0x1AA050u;
    SET_GPR_U32(ctx, 31, 0x1AA058u);
    ctx->pc = 0x1AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA050u;
    // 0x1aa054: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1AA050u, 0x1AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA058u;
label_1aa058:
    // 0x1aa058: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AA058u;
    SET_GPR_U32(ctx, 31, 0x1AA060u);
    ctx->pc = 0x1AA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA058u;
    // 0x1aa05c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA058u, 0x1AA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA060u;
}
