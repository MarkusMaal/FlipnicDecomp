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

// Function: entry_001ed918
// Address: 0x1ed918 - 0x1ed98c
void entry_001ed918_0x1ed918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed918_0x1ed918");
#endif

    switch (ctx->pc) {
        case 0x1ed928u: goto label_1ed928;
        case 0x1ed938u: goto label_1ed938;
        case 0x1ed944u: goto label_1ed944;
        default: break;
    }

    ctx->pc = 0x1ed918u;

    // 0x1ed918: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ed918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed91c: 0x24a5dc90  addiu       $a1, $a1, -0x2370
    ctx->pc = 0x1ed91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958224));
    // 0x1ed920: 0xc07accc  jal         func_1EB330
    ctx->pc = 0x1ED920u;
    SET_GPR_U32(ctx, 31, 0x1ED928u);
    ctx->pc = 0x1ED924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED920u;
    // 0x1ed924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB330u, 0x1ED920u, 0x1ED928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED928u;
label_1ed928:
    // 0x1ed928: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ed92c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ed92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed930: 0xc07b08e  jal         func_1EC238
    ctx->pc = 0x1ED930u;
    SET_GPR_U32(ctx, 31, 0x1ED938u);
    ctx->pc = 0x1ED934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED930u;
    // 0x1ed934: 0xac62c7d4  sw          $v0, -0x382C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC238u, 0x1ED930u, 0x1ED938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED938u;
label_1ed938:
    // 0x1ed938: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed93c: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1ED93Cu;
    SET_GPR_U32(ctx, 31, 0x1ED944u);
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1ED93Cu, 0x1ED944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED944u;
label_1ed944:
    // 0x1ed944: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED944u;
    {
        const bool branch_taken_0x1ed944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED944u;
        // 0x1ed948: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed944) {
            ctx->pc = 0x1ED98Cu;
            return;
        }
    }
    ctx->pc = 0x1ED94Cu;
    // 0x1ed94c: 0x2685c7c0  addiu       $a1, $s4, -0x3840
    ctx->pc = 0x1ed94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952896));
    // 0x1ed950: 0x2662c700  addiu       $v0, $s3, -0x3900
    ctx->pc = 0x1ed950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952704));
    // 0x1ed954: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed958: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed95c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ed95cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed960: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ed960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed964: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ed964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ed968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed96c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed96cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ed970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed974: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ed978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed980: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1ed980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1ed984: 0x807b704  j           func_1EDC10
    ctx->pc = 0x1ED984u;
    ctx->pc = 0x1ED988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED984u;
    // 0x1ed988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    FUN_001edc10_0x1edc10(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED98Cu;
}
