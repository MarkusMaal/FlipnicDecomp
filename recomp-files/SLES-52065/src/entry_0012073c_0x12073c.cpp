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

// Function: entry_0012073c
// Address: 0x12073c - 0x120780
void entry_0012073c_0x12073c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012073c_0x12073c");
#endif

    ctx->pc = 0x12073cu;

    // 0x12073c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x120740: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120744: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x120744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120748: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x120748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x12074c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120750: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x120750u;
    {
        const bool branch_taken_0x120750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120750u;
        // 0x120754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120750) {
            ctx->pc = 0x120784u;
            return;
        }
    }
    ctx->pc = 0x120758u;
    // 0x120758: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x120758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12075c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x12075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x120760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x120760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x120764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120764u;
    {
        const bool branch_taken_0x120764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120764) {
            ctx->pc = 0x120780u;
            return;
        }
    }
    ctx->pc = 0x12076Cu;
    // 0x12076c: 0x93a20031  lbu         $v0, 0x31($sp)
    ctx->pc = 0x12076cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x120770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120770u;
    {
        const bool branch_taken_0x120770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120770) {
            ctx->pc = 0x120780u;
            return;
        }
    }
    ctx->pc = 0x120778u;
    // 0x120778: 0xc048208  jal         func_120820
    ctx->pc = 0x120778u;
    SET_GPR_U32(ctx, 31, 0x120780u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x120778u, 0x120780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120780u;
}
