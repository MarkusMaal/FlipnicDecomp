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

// Function: entry_001a10c0
// Address: 0x1a10c0 - 0x1a119c
void entry_001a10c0_0x1a10c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a10c0_0x1a10c0");
#endif

    switch (ctx->pc) {
        case 0x1a10d0u: goto label_1a10d0;
        case 0x1a10f4u: goto label_1a10f4;
        case 0x1a1120u: goto label_1a1120;
        case 0x1a114cu: goto label_1a114c;
        case 0x1a116cu: goto label_1a116c;
        case 0x1a1178u: goto label_1a1178;
        default: break;
    }

    ctx->pc = 0x1a10c0u;

label_1a10c0:
    // 0x1a10c0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a10c4:
    // 0x1a10c4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a10c8:
    // 0x1a10c8: 0xc06bd9c  jal         func_1AF670
label_1a10cc:
    if (ctx->pc == 0x1A10CCu) {
        ctx->pc = 0x1A10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10C8u;
        // 0x1a10cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A10D0u;
        goto label_1a10d0;
    }
    ctx->pc = 0x1A10C8u;
    SET_GPR_U32(ctx, 31, 0x1A10D0u);
    ctx->pc = 0x1A10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10C8u;
    // 0x1a10cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A10C8u, 0x1A10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10D0u;
label_1a10d0:
    // 0x1a10d0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a10d4:
    // 0x1a10d4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a10d8:
    // 0x1a10d8: 0x8c4202f4  lw          $v0, 0x2F4($v0)
    ctx->pc = 0x1a10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
label_1a10dc:
    // 0x1a10dc: 0xae8209d0  sw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2512), GPR_U32(ctx, 2));
label_1a10e0:
    // 0x1a10e0: 0x8e8409d0  lw          $a0, 0x9D0($s4)
    ctx->pc = 0x1a10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a10e4:
    // 0x1a10e4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a10e8:
    // 0x1a10e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a10ec:
    // 0x1a10ec: 0x320f809  jalr        $t9
label_1a10f0:
    if (ctx->pc == 0x1A10F0u) {
        ctx->pc = 0x1A10F4u;
        goto label_1a10f4;
    }
    ctx->pc = 0x1A10ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A10F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10ECu, 0x1A10F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A10F4u;
label_1a10f4:
    // 0x1a10f4: 0x8e8209d0  lw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a10f8:
    // 0x1a10f8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a10f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a10fc:
    // 0x1a10fc: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a1100:
    // 0x1a1100: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a1104:
    // 0x1a1104: 0x8c4202f8  lw          $v0, 0x2F8($v0)
    ctx->pc = 0x1a1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
label_1a1108:
    // 0x1a1108: 0xae8209d4  sw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1108u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2516), GPR_U32(ctx, 2));
label_1a110c:
    // 0x1a110c: 0x8e8409d4  lw          $a0, 0x9D4($s4)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1110:
    // 0x1a1110: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a1114:
    // 0x1a1114: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a1118:
    // 0x1a1118: 0x320f809  jalr        $t9
label_1a111c:
    if (ctx->pc == 0x1A111Cu) {
        ctx->pc = 0x1A1120u;
        goto label_1a1120;
    }
    ctx->pc = 0x1A1118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1120u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1118u, 0x1A1120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1120u;
label_1a1120:
    // 0x1a1120: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1124:
    // 0x1a1124: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a1124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a1128:
    // 0x1a1128: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a112c:
    // 0x1a112c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a1130:
    // 0x1a1130: 0x8c42030c  lw          $v0, 0x30C($v0)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 780)));
label_1a1134:
    // 0x1a1134: 0xae8209d8  sw          $v0, 0x9D8($s4)
    ctx->pc = 0x1a1134u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2520), GPR_U32(ctx, 2));
label_1a1138:
    // 0x1a1138: 0x8e8409d8  lw          $a0, 0x9D8($s4)
    ctx->pc = 0x1a1138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a113c:
    // 0x1a113c: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a1140:
    // 0x1a1140: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a1144:
    // 0x1a1144: 0x320f809  jalr        $t9
label_1a1148:
    if (ctx->pc == 0x1A1148u) {
        ctx->pc = 0x1A114Cu;
        goto label_1a114c;
    }
    ctx->pc = 0x1A1144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A114Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1144u, 0x1A114Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A114Cu;
label_1a114c:
    // 0x1a114c: 0x8e8209d8  lw          $v0, 0x9D8($s4)
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a1150:
    // 0x1a1150: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
label_1a1154:
    // 0x1a1154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1158:
    // 0x1a1158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a115c:
    // 0x1a115c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a115cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1160:
    // 0x1a1160: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1164:
    // 0x1a1164: 0xc0696fc  jal         func_1A5BF0
label_1a1168:
    if (ctx->pc == 0x1A1168u) {
        ctx->pc = 0x1A1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1164u;
        // 0x1a1168: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A116Cu;
        goto label_1a116c;
    }
    ctx->pc = 0x1A1164u;
    SET_GPR_U32(ctx, 31, 0x1A116Cu);
    ctx->pc = 0x1A1168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1164u;
    // 0x1a1168: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BF0u, 0x1A1164u, 0x1A116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A116Cu;
label_1a116c:
    // 0x1a116c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1a1170:
    // 0x1a1170: 0xc046458  jal         func_119160
label_1a1174:
    if (ctx->pc == 0x1A1174u) {
        ctx->pc = 0x1A1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1170u;
        // 0x1a1174: 0x248403f0  addiu       $a0, $a0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1178u;
        goto label_1a1178;
    }
    ctx->pc = 0x1A1170u;
    SET_GPR_U32(ctx, 31, 0x1A1178u);
    ctx->pc = 0x1A1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1170u;
    // 0x1a1174: 0x248403f0  addiu       $a0, $a0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A1170u, 0x1A1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1178u;
label_1a1178:
    // 0x1a1178: 0xae8206a4  sw          $v0, 0x6A4($s4)
    ctx->pc = 0x1a1178u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1700), GPR_U32(ctx, 2));
label_1a117c:
    // 0x1a117c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a117cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1180:
    // 0x1a1180: 0xa280068c  sb          $zero, 0x68C($s4)
    ctx->pc = 0x1a1180u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
label_1a1184:
    // 0x1a1184: 0xae800678  sw          $zero, 0x678($s4)
    ctx->pc = 0x1a1184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 0));
label_1a1188:
    // 0x1a1188: 0xfe8006b8  sd          $zero, 0x6B8($s4)
    ctx->pc = 0x1a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1720), GPR_U64(ctx, 0));
label_1a118c:
    // 0x1a118c: 0xae8006a8  sw          $zero, 0x6A8($s4)
    ctx->pc = 0x1a118cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 0));
label_1a1190:
    // 0x1a1190: 0xae8006ac  sw          $zero, 0x6AC($s4)
    ctx->pc = 0x1a1190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 0));
label_1a1194:
    // 0x1a1194: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1a1198:
    // 0x1a1198: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a1198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1a119cu;
}
