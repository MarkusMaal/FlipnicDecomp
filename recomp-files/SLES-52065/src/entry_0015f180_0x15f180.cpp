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

// Function: entry_0015f180
// Address: 0x15f180 - 0x15f290
void entry_0015f180_0x15f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f180_0x15f180");
#endif

    switch (ctx->pc) {
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f210u: goto label_15f210;
        case 0x15f258u: goto label_15f258;
        default: break;
    }

    ctx->pc = 0x15f180u;

label_15f180:
    // 0x15f180: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f184:
    // 0x15f184: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f188:
    // 0x15f188: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f18c:
    // 0x15f18c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f190:
    // 0x15f190: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x15f190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15f194:
    // 0x15f194: 0x4600062  bltz        $v1, . + 4 + (0x62 << 2)
label_15f198:
    if (ctx->pc == 0x15F198u) {
        ctx->pc = 0x15F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F194u;
        // 0x15f198: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F19Cu;
        goto label_15f19c;
    }
    ctx->pc = 0x15F194u;
    {
        const bool branch_taken_0x15f194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x15F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F194u;
        // 0x15f198: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f194) {
            ctx->pc = 0x15F320u;
            return;
        }
    }
    ctx->pc = 0x15F19Cu;
label_15f19c:
    // 0x15f19c: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_15f1a0:
    if (ctx->pc == 0x15F1A0u) {
        ctx->pc = 0x15F1A4u;
        goto label_15f1a4;
    }
    ctx->pc = 0x15F19Cu;
    {
        const bool branch_taken_0x15f19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f19c) {
            ctx->pc = 0x15F320u;
            return;
        }
    }
    ctx->pc = 0x15F1A4u;
label_15f1a4:
    // 0x15f1a4: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f1a8:
    // 0x15f1a8: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
label_15f1ac:
    if (ctx->pc == 0x15F1ACu) {
        ctx->pc = 0x15F1B0u;
        goto label_15f1b0;
    }
    ctx->pc = 0x15F1A8u;
    {
        const bool branch_taken_0x15f1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1a8) {
            ctx->pc = 0x15F320u;
            return;
        }
    }
    ctx->pc = 0x15F1B0u;
label_15f1b0:
    // 0x15f1b0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f1b4:
    // 0x15f1b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f1b8:
    // 0x15f1b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1bc:
    // 0x15f1bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f1c0:
    // 0x15f1c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1c4:
    // 0x15f1c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f1c8:
    // 0x15f1c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f1cc:
    // 0x15f1cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15f1d0:
    // 0x15f1d0: 0x320f809  jalr        $t9
label_15f1d4:
    if (ctx->pc == 0x15F1D4u) {
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1D0u;
        // 0x15f1d4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1D8u;
        goto label_15f1d8;
    }
    ctx->pc = 0x15F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F1D8u);
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1D0u;
        // 0x15f1d4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F1D0u, 0x15F1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f1dc:
    // 0x15f1dc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f1e0:
    // 0x15f1e0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f1e4:
    // 0x15f1e4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f1e8:
    // 0x15f1e8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f1ec:
    // 0x15f1ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1f0:
    // 0x15f1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f1f4:
    // 0x15f1f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f1f8:
    // 0x15f1f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f1fc:
    // 0x15f1fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f200:
    // 0x15f200: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f204:
    // 0x15f204: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f208:
    // 0x15f208: 0x320f809  jalr        $t9
label_15f20c:
    if (ctx->pc == 0x15F20Cu) {
        ctx->pc = 0x15F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F208u;
        // 0x15f20c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F210u;
        goto label_15f210;
    }
    ctx->pc = 0x15F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F210u);
        ctx->pc = 0x15F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F208u;
        // 0x15f20c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F208u, 0x15F210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F210u;
label_15f210:
    // 0x15f210: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f214:
    // 0x15f214: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
label_15f218:
    if (ctx->pc == 0x15F218u) {
        ctx->pc = 0x15F21Cu;
        goto label_15f21c;
    }
    ctx->pc = 0x15F214u;
    {
        const bool branch_taken_0x15f214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f214) {
            ctx->pc = 0x15F2E4u;
            return;
        }
    }
    ctx->pc = 0x15F21Cu;
label_15f21c:
    // 0x15f21c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f220:
    // 0x15f220: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f224:
    // 0x15f224: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f228:
    // 0x15f228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f22c:
    // 0x15f22c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f230:
    // 0x15f230: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f234:
    // 0x15f234: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f238:
    // 0x15f238: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f23c:
    // 0x15f23c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f240:
    // 0x15f240: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f240u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f244:
    // 0x15f244: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f248:
    // 0x15f248: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f24c:
    // 0x15f24c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f250:
    // 0x15f250: 0x320f809  jalr        $t9
label_15f254:
    if (ctx->pc == 0x15F254u) {
        ctx->pc = 0x15F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F250u;
        // 0x15f254: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F258u;
        goto label_15f258;
    }
    ctx->pc = 0x15F250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F258u);
        ctx->pc = 0x15F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F250u;
        // 0x15f254: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F250u, 0x15F258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F258u;
label_15f258:
    // 0x15f258: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f25c:
    // 0x15f25c: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_15f260:
    if (ctx->pc == 0x15F260u) {
        ctx->pc = 0x15F264u;
        goto label_15f264;
    }
    ctx->pc = 0x15F25Cu;
    {
        const bool branch_taken_0x15f25c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f25c) {
            ctx->pc = 0x15F2E4u;
            return;
        }
    }
    ctx->pc = 0x15F264u;
label_15f264:
    // 0x15f264: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f268:
    if (ctx->pc == 0x15F268u) {
        ctx->pc = 0x15F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F264u;
        // 0x15f268: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F26Cu;
        goto label_15f26c;
    }
    ctx->pc = 0x15F264u;
    {
        const bool branch_taken_0x15f264 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F264u;
        // 0x15f268: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f264) {
            ctx->pc = 0x15F290u;
            return;
        }
    }
    ctx->pc = 0x15F26Cu;
label_15f26c:
    // 0x15f26c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f270:
    // 0x15f270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f274:
    // 0x15f274: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f278:
    // 0x15f278: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f27c:
    // 0x15f27c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f280:
    // 0x15f280: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f284:
    // 0x15f284: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f288:
    if (ctx->pc == 0x15F288u) {
        ctx->pc = 0x15F28Cu;
        goto label_15f28c;
    }
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F290u;
            return;
        }
    }
    ctx->pc = 0x15F28Cu;
label_15f28c:
    // 0x15f28c: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f28cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15f290u;
}
