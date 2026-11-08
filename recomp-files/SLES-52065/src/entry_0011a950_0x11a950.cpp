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

// Function: entry_0011a950
// Address: 0x11a950 - 0x11a980
void entry_0011a950_0x11a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a950_0x11a950");
#endif

    switch (ctx->pc) {
        case 0x11a958u: goto label_11a958;
        case 0x11a960u: goto label_11a960;
        case 0x11a978u: goto label_11a978;
        default: break;
    }

    ctx->pc = 0x11a950u;

    // 0x11a950: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x11A950u;
    SET_GPR_U32(ctx, 31, 0x11A958u);
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x11A950u, 0x11A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A958u;
label_11a958:
    // 0x11a958: 0xc046c6c  jal         func_11B1B0
    ctx->pc = 0x11A958u;
    SET_GPR_U32(ctx, 31, 0x11A960u);
    ctx->pc = 0x11A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A958u;
    // 0x11a95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B1B0u, 0x11A958u, 0x11A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A960u;
label_11a960:
    // 0x11a960: 0x8e230538  lw          $v1, 0x538($s1)
    ctx->pc = 0x11a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1336)));
    // 0x11a964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a968: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A968u;
    {
        const bool branch_taken_0x11a968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a968) {
            ctx->pc = 0x11A980u;
            return;
        }
    }
    ctx->pc = 0x11A970u;
    // 0x11a970: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11A970u;
    SET_GPR_U32(ctx, 31, 0x11A978u);
    ctx->pc = 0x11A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A970u;
    // 0x11a974: 0x8e240530  lw          $a0, 0x530($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11A970u, 0x11A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A978u;
label_11a978:
    // 0x11a978: 0xc046efc  jal         func_11BBF0
    ctx->pc = 0x11A978u;
    SET_GPR_U32(ctx, 31, 0x11A980u);
    ctx->pc = 0x11A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A978u;
    // 0x11a97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBF0u, 0x11A978u, 0x11A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A980u;
}
