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

// Function: entry_00192688
// Address: 0x192688 - 0x1926c4
void entry_00192688_0x192688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192688_0x192688");
#endif

    switch (ctx->pc) {
        case 0x192690u: goto label_192690;
        default: break;
    }

    ctx->pc = 0x192688u;

    // 0x192688: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x192688u;
    SET_GPR_U32(ctx, 31, 0x192690u);
    ctx->pc = 0x19268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192688u;
    // 0x19268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x192688u, 0x192690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192690u;
label_192690:
    // 0x192690: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x192690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192694: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x192694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x192698: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x192698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19269c: 0x78820560  lq          $v0, 0x560($a0)
    ctx->pc = 0x19269cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x1926a0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1926a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1926a4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1926a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1926a8: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1926a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1926ac: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1926acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1926b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1926B0u;
    {
        const bool branch_taken_0x1926b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B0u;
        // 0x1926b4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926b0) {
            ctx->pc = 0x1926C4u;
            return;
        }
    }
    ctx->pc = 0x1926B8u;
    // 0x1926b8: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1926b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 4294956800)));
    // 0x1926bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1926BCu;
    {
        const bool branch_taken_0x1926bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926BCu;
        // 0x1926c0: 0x7c830560  sq          $v1, 0x560($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926bc) {
            ctx->pc = 0x1926DCu;
            return;
        }
    }
    ctx->pc = 0x1926C4u;
}
