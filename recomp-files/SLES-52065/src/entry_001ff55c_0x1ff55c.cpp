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

// Function: entry_001ff55c
// Address: 0x1ff55c - 0x1ff5bc
void entry_001ff55c_0x1ff55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff55c_0x1ff55c");
#endif

    switch (ctx->pc) {
        case 0x1ff5b4u: goto label_1ff5b4;
        default: break;
    }

    ctx->pc = 0x1ff55cu;

    // 0x1ff55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff560: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff564: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1ff564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ff568: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1ff568u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1ff56c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ff56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ff570: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x1ff570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff574: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1ff574u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1ff578: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff57c: 0x25c3d9d0  addiu       $v1, $t6, -0x2630
    ctx->pc = 0x1ff57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
    // 0x1ff580: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1ff580u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1ff584: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1ff584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1ff588: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff58c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff590: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1ff590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1ff594: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1ff594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ff598: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ff598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ff59c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5a0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ff5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1ff5a4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1ff5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1ff5a8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ff5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1ff5ac: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF5ACu;
    SET_GPR_U32(ctx, 31, 0x1FF5B4u);
    ctx->pc = 0x1FF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5ACu;
    // 0x1ff5b0: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF5ACu, 0x1FF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5B4u;
label_1ff5b4:
    // 0x1ff5b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FF5B4u;
    {
        const bool branch_taken_0x1ff5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5B4u;
        // 0x1ff5b8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5b4) {
            ctx->pc = 0x1FF620u;
            return;
        }
    }
    ctx->pc = 0x1FF5BCu;
}
