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

// Function: entry_001011c8
// Address: 0x1011c8 - 0x1012b8
void entry_001011c8_0x1011c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001011c8_0x1011c8");
#endif

    switch (ctx->pc) {
        case 0x1011f8u: goto label_1011f8;
        case 0x101238u: goto label_101238;
        case 0x101268u: goto label_101268;
        case 0x1012b0u: goto label_1012b0;
        default: break;
    }

    ctx->pc = 0x1011c8u;

label_1011c8:
    // 0x1011c8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1011c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1011cc:
    // 0x1011cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1011ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1011d0:
    // 0x1011d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1011d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1011d4:
    // 0x1011d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1011d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1011d8:
    // 0x1011d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1011d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1011dc:
    // 0x1011dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1011dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1011e0:
    // 0x1011e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1011e4:
    // 0x1011e4: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_1011e8:
    // 0x1011e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1011ec:
    // 0x1011ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1011ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1011f0:
    // 0x1011f0: 0x320f809  jalr        $t9
label_1011f4:
    if (ctx->pc == 0x1011F4u) {
        ctx->pc = 0x1011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F0u;
        // 0x1011f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011F8u;
        goto label_1011f8;
    }
    ctx->pc = 0x1011F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1011F8u);
        ctx->pc = 0x1011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F0u;
        // 0x1011f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1011F0u, 0x1011F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1011F8u;
label_1011f8:
    // 0x1011f8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1011f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1011fc:
    // 0x1011fc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1011fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101200:
    // 0x101200: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101204:
    // 0x101204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x101204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_101208:
    // 0x101208: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10120c:
    // 0x10120c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x10120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_101210:
    // 0x101210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101214:
    // 0x101214: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101218:
    // 0x101218: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x101218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10121c:
    // 0x10121c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x10121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101220:
    // 0x101220: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x101220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_101224:
    // 0x101224: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x101224u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_101228:
    // 0x101228: 0x0  nop
    ctx->pc = 0x101228u;
    // NOP
label_10122c:
    // 0x10122c: 0x0  nop
    ctx->pc = 0x10122cu;
    // NOP
label_101230:
    // 0x101230: 0xc04c730  jal         func_131CC0
label_101234:
    if (ctx->pc == 0x101234u) {
        ctx->pc = 0x101238u;
        goto label_101238;
    }
    ctx->pc = 0x101230u;
    SET_GPR_U32(ctx, 31, 0x101238u);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x101230u, 0x101238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101238u;
label_101238:
    // 0x101238: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10123c:
    // 0x10123c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x10123cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101240:
    // 0x101240: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101244:
    // 0x101244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_101248:
    // 0x101248: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10124c:
    // 0x10124c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101250:
    // 0x101250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101254:
    // 0x101254: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_101258:
    // 0x101258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10125c:
    // 0x10125c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10125cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_101260:
    // 0x101260: 0x320f809  jalr        $t9
label_101264:
    if (ctx->pc == 0x101264u) {
        ctx->pc = 0x101264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101260u;
        // 0x101264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101268u;
        goto label_101268;
    }
    ctx->pc = 0x101260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101268u);
        ctx->pc = 0x101264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101260u;
        // 0x101264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101260u, 0x101268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101268u;
label_101268:
    // 0x101268: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10126c:
    // 0x10126c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101270:
    // 0x101270: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x101270u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_101274:
    // 0x101274: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_101278:
    // 0x101278: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10127c:
    // 0x10127c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_101280:
    // 0x101280: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101284:
    // 0x101284: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_101288:
    // 0x101288: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x101288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_10128c:
    // 0x10128c: 0x84420228  lh          $v0, 0x228($v0)
    ctx->pc = 0x10128cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 552)));
label_101290:
    // 0x101290: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_101294:
    if (ctx->pc == 0x101294u) {
        ctx->pc = 0x101298u;
        goto label_101298;
    }
    ctx->pc = 0x101290u;
    {
        const bool branch_taken_0x101290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101290) {
            ctx->pc = 0x1012B8u;
            return;
        }
    }
    ctx->pc = 0x101298u;
label_101298:
    // 0x101298: 0x848201ea  lh          $v0, 0x1EA($a0)
    ctx->pc = 0x101298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 490)));
label_10129c:
    // 0x10129c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1012a0:
    if (ctx->pc == 0x1012A0u) {
        ctx->pc = 0x1012A4u;
        goto label_1012a4;
    }
    ctx->pc = 0x10129Cu;
    {
        const bool branch_taken_0x10129c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10129c) {
            ctx->pc = 0x1012B8u;
            return;
        }
    }
    ctx->pc = 0x1012A4u;
label_1012a4:
    // 0x1012a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1012a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1012a8:
    // 0x1012a8: 0xc0401e0  jal         func_100780
label_1012ac:
    if (ctx->pc == 0x1012ACu) {
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B0u;
        goto label_1012b0;
    }
    ctx->pc = 0x1012A8u;
    SET_GPR_U32(ctx, 31, 0x1012B0u);
    ctx->pc = 0x1012ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012A8u;
    // 0x1012ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100780u, 0x1012A8u, 0x1012B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012B0u;
label_1012b0:
    // 0x1012b0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1012b4:
    if (ctx->pc == 0x1012B4u) {
        ctx->pc = 0x1012B8u;
        goto label_fallthrough_0x1012b0;
    }
    ctx->pc = 0x1012B0u;
    {
        const bool branch_taken_0x1012b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1012b0) {
            ctx->pc = 0x101344u;
            return;
        }
    }
label_fallthrough_0x1012b0:
    ctx->pc = 0x1012B8u;
}
