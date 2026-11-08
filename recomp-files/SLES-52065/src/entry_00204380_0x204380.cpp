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

// Function: entry_00204380
// Address: 0x204380 - 0x2043b0
void entry_00204380_0x204380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204380_0x204380");
#endif

    ctx->pc = 0x204380u;

    // 0x204380: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x204380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x204384: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x204388: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x204388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x20438c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x20438cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204390: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x204394: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x204394u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x204398: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x204398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x20439c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20439Cu;
    {
        const bool branch_taken_0x20439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20439Cu;
        // 0x2043a0: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20439c) {
            ctx->pc = 0x2043B0u;
            return;
        }
    }
    ctx->pc = 0x2043A4u;
    // 0x2043a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2043a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2043a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2043A8u;
    {
        const bool branch_taken_0x2043a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A8u;
        // 0x2043ac: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a8) {
            ctx->pc = 0x2043C0u;
            return;
        }
    }
    ctx->pc = 0x2043B0u;
}
