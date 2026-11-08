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

// Function: entry_001380e8
// Address: 0x1380e8 - 0x138184
void entry_001380e8_0x1380e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380e8_0x1380e8");
#endif

    switch (ctx->pc) {
        case 0x138158u: goto label_138158;
        default: break;
    }

    ctx->pc = 0x1380e8u;

label_1380e8:
    // 0x1380e8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1380e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1380ec:
    // 0x1380ec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1380f0:
    // 0x1380f0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1380f4:
    // 0x1380f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1380f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1380f8:
    // 0x1380f8: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1380fc:
    // 0x1380fc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1380fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_138100:
    // 0x138100: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_138104:
    // 0x138104: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138108:
    // 0x138108: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x138108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_13810c:
    // 0x13810c: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
label_138110:
    // 0x138110: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_138114:
    // 0x138114: 0x34428019  ori         $v0, $v0, 0x8019
    ctx->pc = 0x138114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32793);
label_138118:
    // 0x138118: 0xa1050003  sb          $a1, 0x3($t0)
    ctx->pc = 0x138118u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 5));
label_13811c:
    // 0x13811c: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x13811cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_138120:
    // 0x138120: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x138120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_138124:
    // 0x138124: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x138124u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_138128:
    // 0x138128: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x138128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_13812c:
    // 0x13812c: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x13812cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_138130:
    // 0x138130: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x138130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138134:
    // 0x138134: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_138138:
    // 0x138138: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x138138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_13813c:
    // 0x13813c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_138140:
    // 0x138140: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_138144:
    // 0x138144: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_138148:
    // 0x138148: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_13814c:
    if (ctx->pc == 0x13814Cu) {
        ctx->pc = 0x13814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138148u;
        // 0x13814c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138150u;
        goto label_138150;
    }
    ctx->pc = 0x138148u;
    {
        const bool branch_taken_0x138148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138148u;
        // 0x13814c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138148) {
            ctx->pc = 0x138184u;
            return;
        }
    }
    ctx->pc = 0x138150u;
label_138150:
    // 0x138150: 0xc0485c0  jal         func_121700
label_138154:
    if (ctx->pc == 0x138154u) {
        ctx->pc = 0x138158u;
        goto label_138158;
    }
    ctx->pc = 0x138150u;
    SET_GPR_U32(ctx, 31, 0x138158u);
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x138150u, 0x138158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138158u;
label_138158:
    // 0x138158: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_13815c:
    // 0x13815c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_138160:
    // 0x138160: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_138164:
    // 0x138164: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x138164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138168:
    // 0x138168: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13816c:
    // 0x13816c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138170:
    // 0x138170: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x138170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_138174:
    // 0x138174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x138174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138178:
    // 0x138178: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13817c:
    // 0x13817c: 0x320f809  jalr        $t9
label_138180:
    if (ctx->pc == 0x138180u) {
        ctx->pc = 0x138180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13817Cu;
        // 0x138180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138184u;
        goto label_fallthrough_0x13817c;
    }
    ctx->pc = 0x13817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x138184u);
        ctx->pc = 0x138180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13817Cu;
        // 0x138180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13817Cu, 0x138184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13817c:
    ctx->pc = 0x138184u;
}
