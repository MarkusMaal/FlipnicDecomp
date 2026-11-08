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

// Function: entry_001208e4
// Address: 0x1208e4 - 0x120928
void entry_001208e4_0x1208e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001208e4_0x1208e4");
#endif

    ctx->pc = 0x1208e4u;

    // 0x1208e4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1208e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1208e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1208e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1208ec: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1208ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1208f0: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x1208f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x1208f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1208f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1208F8u;
    {
        const bool branch_taken_0x1208f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1208FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208F8u;
        // 0x1208fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208f8) {
            ctx->pc = 0x12092Cu;
            return;
        }
    }
    ctx->pc = 0x120900u;
    // 0x120900: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x120900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x120904: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x120904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x120908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x120908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12090c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12090Cu;
    {
        const bool branch_taken_0x12090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12090c) {
            ctx->pc = 0x120928u;
            return;
        }
    }
    ctx->pc = 0x120914u;
    // 0x120914: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x120914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x120918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120918u;
    {
        const bool branch_taken_0x120918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120918) {
            ctx->pc = 0x120928u;
            return;
        }
    }
    ctx->pc = 0x120920u;
    // 0x120920: 0xc048208  jal         func_120820
    ctx->pc = 0x120920u;
    SET_GPR_U32(ctx, 31, 0x120928u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x120920u, 0x120928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120928u;
}
