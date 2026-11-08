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

// Function: FUN_001f49f8
// Address: 0x1f49f8 - 0x1f4a44
void FUN_001f49f8_0x1f49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f49f8_0x1f49f8");
#endif

    switch (ctx->pc) {
        case 0x1f4a1cu: goto label_1f4a1c;
        case 0x1f4a24u: goto label_1f4a24;
        default: break;
    }

    ctx->pc = 0x1f49f8u;

    // 0x1f49f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f49f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f49fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f49fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4a0c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f4a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a14: 0xc07d1fe  jal         func_1F47F8
    ctx->pc = 0x1F4A14u;
    SET_GPR_U32(ctx, 31, 0x1F4A1Cu);
    ctx->pc = 0x1F4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A14u;
    // 0x1f4a18: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47F8u, 0x1F4A14u, 0x1F4A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A1Cu;
label_1f4a1c:
    // 0x1f4a1c: 0xc07d244  jal         func_1F4910
    ctx->pc = 0x1F4A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A24u);
    ctx->pc = 0x1F4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4910u, 0x1F4A1Cu, 0x1F4A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A24u;
label_1f4a24:
    // 0x1f4a24: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f4a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a2c: 0x8c45a800  lw          $a1, -0x5800($v0)
    ctx->pc = 0x1f4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21A800u));
    // 0x1f4a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4a38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f4a3c: 0x807ae90  j           func_1EBA40
    ctx->pc = 0x1F4A3Cu;
    ctx->pc = 0x1F4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A3Cu;
    // 0x1f4a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA40u;
    ps2__ExecOSD_0x1eba40(rdram, ctx, runtime); return;
    ctx->pc = 0x1F4A44u;
}
