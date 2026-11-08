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

// Function: entry_001fe9dc
// Address: 0x1fe9dc - 0x1fea20
void entry_001fe9dc_0x1fe9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe9dc_0x1fe9dc");
#endif

    switch (ctx->pc) {
        case 0x1fea0cu: goto label_1fea0c;
        default: break;
    }

    ctx->pc = 0x1fe9dcu;

    // 0x1fe9dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fe9e0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe9e4: 0x2463d6a0  addiu       $v1, $v1, -0x2960
    ctx->pc = 0x1fe9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956704));
    // 0x1fe9e8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1fe9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1fe9ec: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1fe9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1fe9f0: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1fe9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1fe9f4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe9f8: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1fe9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x1fe9fc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE9FCu;
    {
        const bool branch_taken_0x1fe9fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9FCu;
        // 0x1fea00: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9fc) {
            ctx->pc = 0x1FEA20u;
            return;
        }
    }
    ctx->pc = 0x1FEA04u;
    // 0x1fea04: 0xc07af74  jal         func_1EBDD0
    ctx->pc = 0x1FEA04u;
    SET_GPR_U32(ctx, 31, 0x1FEA0Cu);
    ctx->pc = 0x1FEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA04u;
    // 0x1fea08: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBDD0u, 0x1FEA04u, 0x1FEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA0Cu;
label_1fea0c:
    // 0x1fea0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEA0Cu;
    {
        const bool branch_taken_0x1fea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA0Cu;
        // 0x1fea10: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea0c) {
            ctx->pc = 0x1FEA24u;
            return;
        }
    }
    ctx->pc = 0x1FEA14u;
    // 0x1fea14: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1fea14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fea18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fea1c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fea1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1fea20u;
}
