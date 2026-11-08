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

// Function: entry_001fef08
// Address: 0x1fef08 - 0x1fef68
void entry_001fef08_0x1fef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fef08_0x1fef08");
#endif

    switch (ctx->pc) {
        case 0x1fef10u: goto label_1fef10;
        default: break;
    }

    ctx->pc = 0x1fef08u;

    // 0x1fef08: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x1FEF08u;
    SET_GPR_U32(ctx, 31, 0x1FEF10u);
    ctx->pc = 0x1FEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF08u;
    // 0x1fef0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x1FEF08u, 0x1FEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF10u;
label_1fef10:
    // 0x1fef10: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x1fef10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x1fef14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FEF14u;
    {
        const bool branch_taken_0x1fef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF14u;
        // 0x1fef18: 0x3c140022  lui         $s4, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef14) {
            ctx->pc = 0x1FEF70u;
            return;
        }
    }
    ctx->pc = 0x1FEF1Cu;
    // 0x1fef1c: 0x2682d9c8  addiu       $v0, $s4, -0x2638
    ctx->pc = 0x1fef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1fef20: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1fef20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fef24: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1fef28: 0x1209000f  beq         $s0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FEF28u;
    {
        const bool branch_taken_0x1fef28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x1FEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF28u;
        // 0x1fef2c: 0x1158c2  srl         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef28) {
            ctx->pc = 0x1FEF68u;
            return;
        }
    }
    ctx->pc = 0x1FEF30u;
    // 0x1fef30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fef34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fef38: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fef3c: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1fef3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fef40: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x1fef40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fef44: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1fef44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fef48: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1fef4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fef54: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1fef54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1fef58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fef5c: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1fef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1fef60: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x1FEF60u;
    {
        const bool branch_taken_0x1fef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF60u;
        // 0x1fef64: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef60) {
            ctx->pc = 0x1FF614u;
            return;
        }
    }
    ctx->pc = 0x1FEF68u;
}
