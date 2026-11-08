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

// Function: entry_001085a8
// Address: 0x1085a8 - 0x108664
void entry_001085a8_0x1085a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001085a8_0x1085a8");
#endif

    switch (ctx->pc) {
        case 0x1085d0u: goto label_1085d0;
        default: break;
    }

    ctx->pc = 0x1085a8u;

    // 0x1085a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1085a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1085ac: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0x3c02433e  lui         $v0, 0x433E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x108664u;
            return;
        }
    }
    ctx->pc = 0x1085B4u;
    // 0x1085b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1085b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1085b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1085bc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1085bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1085c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1085c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1085c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1085c8: 0xc041ddc  jal         func_107770
    ctx->pc = 0x1085C8u;
    SET_GPR_U32(ctx, 31, 0x1085D0u);
    ctx->pc = 0x1085CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085C8u;
    // 0x1085cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x1085C8u, 0x1085D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085D0u;
label_1085d0:
    // 0x1085d0: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x1085d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1085d4: 0x19000039  blez        $t0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1085D4u;
    {
        const bool branch_taken_0x1085d4 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1085d4) {
            ctx->pc = 0x1086BCu;
            return;
        }
    }
    ctx->pc = 0x1085DCu;
    // 0x1085dc: 0x8f83821c  lw          $v1, -0x7DE4($gp)
    ctx->pc = 0x1085dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x1085e0: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x1085e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1085e4: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1085E4u;
    {
        const bool branch_taken_0x1085e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E4u;
        // 0x1085e8: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e4) {
            ctx->pc = 0x1086BCu;
            return;
        }
    }
    ctx->pc = 0x1085ECu;
    // 0x1085ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1085ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1085f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1085f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1085f4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1085f8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1085f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1085fc: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1085fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x108600: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108604: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x108604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x108608: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x108608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x10860c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10860cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x108610: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x108614: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108618: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x10861c: 0x2442ffdc  addiu       $v0, $v0, -0x24
    ctx->pc = 0x10861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x108620: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x108620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x108624: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x108624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x108628: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x108628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x10862c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108630: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x108630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x108634: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x108638: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x108638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10863c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x10863cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x108640: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x108640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x108644: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x108644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108648: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x108648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10864c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x108654: 0x8f82821c  lw          $v0, -0x7DE4($gp)
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x108658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10865c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10865Cu;
    {
        const bool branch_taken_0x10865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10865Cu;
        // 0x108660: 0xaf82821c  sw          $v0, -0x7DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10865c) {
            ctx->pc = 0x1086BCu;
            return;
        }
    }
    ctx->pc = 0x108664u;
}
